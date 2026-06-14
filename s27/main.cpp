#include <chrono>
#include <iostream>
#include <mutex>
#include <string>
#include <thread>
#include <vector>

struct MyFunctor {
    MyFunctor(std::string _s, size_t _N) : s { _s }, N { _N } {
    }
    std::string s;
    size_t N;
    void operator()() {
        std::cout << "id: " << std::this_thread::get_id() << std::endl;
        auto t1 { std::chrono::high_resolution_clock::now() };
        double T {};
        for (size_t i {}; i < N; i++)
            for (size_t j {}; j < N; j++)
                T += (i + j);
        auto t2 { std::chrono::high_resolution_clock::now() };
        auto duration { std::chrono::duration_cast<std::chrono::milliseconds>(t2 - t1).count() };
        std::cout << "Took: " << duration << "ms in functor -> " << T / 23500 / 23500 << std::endl;
    }
};

// void shared_cout(int i) {
//     std::cout << std::this_thread::get_id() << ": " << i << std::endl;
// }

std::mutex mu {};

// void shared_cout(int i) {
//     mu.lock();
//     std::cout << std::this_thread::get_id() << ": " << i << std::endl;
//     mu.unlock();
// }

void shared_cout(int i) {
    std::lock_guard<std::mutex> gaurd { mu };
    std::cout << std::this_thread::get_id() << ": " << i << std::endl;
}

void thread_function() {
    for (int i { -100 }; i < 0; i++)
        shared_cout(i);
}

int main() {
    // std::cout << std::thread::hardware_concurrency() << std::endl;

    // std::string s { "a" };
    // MyFunctor functor { std::move(s), 23500 };
    // std::vector<std::thread> threads {};
    // for (size_t i {}; i < std::thread::hardware_concurrency(); i++) {
    //     std::thread t { functor };
    //     std::cout << "creating thread with id: " << t.get_id() << std::endl;
    //     // t.join();
    //     threads.push_back(std::move(t));
    // }

    // for (auto &t : threads)
    //     t.join();

    std::thread t { &thread_function };
    std::thread _t { &thread_function };
    std::thread __t { &thread_function };
    for (int i { 100 }; i > 0; i--)
        shared_cout(i);
    t.join();
    _t.join();
    __t.join();

    return 0;
}