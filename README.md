# Clone learn-clang Repository

```
$ git clone https://github.com/KushibikiMashu/learn-clang.git
$ cd learn-clang
$ docker pull alpine:3.8
$ docker build -t alpine:learn-c .
```

# How to compile and exec compiled file
```
$ docker run -v "$PWD":/home -ti --rm alpine:learn-c
[containerID]:/# cd /home/algorithm
[containerID]:/home/algorithm# gcc binary_search.c
[containerID]:/home/algorithm# ./a.out
```