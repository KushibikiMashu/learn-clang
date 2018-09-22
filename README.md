# Clone learn-clang

```
$ git clone https://github.com/KushibikiMashu/learn-clang.git
$ cd learn-clang
$ docker build -t ubuntu:learn-clang .
```

# How to compile and exec c file
Docker Image: ubuntu:latest
```
$ docker run -ti --name learnc -v $(pwd)/../learn-clang:/home ubuntu:learn-clang bash
[containerID]:/# cd /home
[containerID]:/home/algorithm# gcc binary_search.c
[containerID]:/home/algorithm# ./a.out
```
