FROM debian:stretch-slim
COPY --from=builder /build/foobar-0.1.1-Linux-baz.deb /tmp/
RUN dpkg --install /tmp/foobar-0.1.1-Linux-baz.deb
CMD ["baz"]
