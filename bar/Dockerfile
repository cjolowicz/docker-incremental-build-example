FROM debian:stretch-slim
COPY --from=builder /build/foobar-0.1.1-Linux-bar.deb /tmp/
RUN dpkg --install /tmp/foobar-0.1.1-Linux-bar.deb
CMD ["bar"]
