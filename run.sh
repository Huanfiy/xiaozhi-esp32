#!/bin/zsh

# 设置错误时退出
set -e

# 显示帮助信息的函数
show_help() {
    echo "使用方法: $0 [命令]"
    echo "可用命令:"
    echo "  init     - 配置ESP-IDF环境并设置目标芯片"
    echo "  build    - 编译项目"
    echo "  flash    - 烧录项目"
    echo "  help     - 显示此帮助信息"
}

# 配置环境
init_environment() {
    echo "正在配置ESP-IDF环境..."
    . "$HOME/esp/esp-idf-v5.4/export.sh"
    echo "正在设置目标芯片为esp32s3..."
    idf.py set-target esp32s3
}

# 编译项目
build_project() {
    echo "正在编译项目..."
    idf.py build
}

# 烧录项目
flash_project() {
    echo "正在烧录项目..."
    idf.py -p /dev/ttyACM0 flash
}

# 主函数
main() {
    # 如果没有参数，显示帮助信息
    if [ $# -eq 0 ]; then
        show_help
        exit 1
    fi

    # 根据参数执行相应的操作
    case "$1" in
    "init")
        init_environment
        ;;
    "build")
        build_project
        ;;
    "flash")
        flash_project
        ;;
    "help")
        show_help
        ;;
    *)
        echo "错误: 未知的命令 '$1'"
        show_help
        exit 1
        ;;
    esac
}

# 执行主函数
main "$@"
