FROM debian:stretch-slim
RUN apt-get update && apt-get install -y \
    cmake \
    dpkg-dev \
    gcc \
    make \
    && rm -rf /var/lib/apt/lists/*
COPY . /src
WORKDIR /build
RUN cmake /src
RUN make package
RUN dpkg --install foobar-0.1.1-Linux-bar.deb
CMD ["bar"]
