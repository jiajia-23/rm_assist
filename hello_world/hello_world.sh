#!/bin/bash
# 启动时显示 "Hello World!"

# 检查是否为 root 用户
if [ "$(id -u)" != "0" ]; then
   echo "该脚本必须以 root 权限运行" 1>&2
   exit 1
fi

# 打开一个新的终端窗口
gnome-terminal -- bash -c "echo 'Hello World!'; exec bash"
