FROM python

WORKDIR /mnt/g/desktop/AP/AP_test/s26

RUN apt-get update \
    && apt-get -y install --no-install-recommends build-essential libtbb-dev \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/* /var/cache/apt/*

ENV LD_LIBRARY_PATH="${LD_LIBRARY_PATH}:."

ADD requirements.txt .

RUN python3 -m pip install --no-cache-dir -r requirements.txt \
    && rm requirements.txt

COPY . . 