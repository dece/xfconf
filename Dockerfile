FROM debian:buster-slim

RUN apt update
RUN apt install -y --no-install-recommends \
    build-essential autoconf automake git \
    xfce4-dev-tools intltool libtool libglib2.0-dev gtk-doc-tools \
    libxfce4util7 libxfce4util-bin libxfce4util-common libxfce4util-dev \
    libdbus-1-dev libdbus-glib-1-dev

ENTRYPOINT ["/xfconf/build-xion.sh"]
