# Consulate

使用zephir开发的php C扩展

## Install

### Windows

目前仅提供了 PHP-7.1 x64版本的dll，下载地址为： http://10.200.119.142/php/

1. 下载对应的dll

2. 将dll拷贝到php扩展目录

3. 编辑php.ini文件

```ini
extension=php_consulate.dll
```

4. 重启web服务

### Linux/Unix/Mac

在Unix-based平台下，直接编译源代码即可

#### Requirements

* php5.6.x/7.0.x/7.1.x dev库

* `g++` >=4.4 | `clang++` >= 3.x | `vc++` >= 11

* GNU `make` >= 3.81

* `re2c` >= 0.13

Ubuntu:

```bash
# Use actual PHP development headers and tools here
sudo apt-get install php71-dev libpcre3-dev gcc make re2c
```

macOS:

homebrew:

```bash
# available versions 56, 70, 71
```

#### Compilation

拉取源代码并编译

```bash
git clone git@git.corp.plu.cn:php/base.consul-client.git
cd ext

phpize
./configure
make -j32 & make install
```

编辑php.ini

```ini
extension=php_consulate.dll
```

## 支持

现在支持Consul 1.0.x版本的接口：

* Agent

* KV

* Health

* Status
