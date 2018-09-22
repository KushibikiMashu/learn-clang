FROM ubuntu:latest

RUN apt-get update \
	apt-get -y install sudo build-essential git vim man manpages-dev strace
