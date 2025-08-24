FROM mcr.microsoft.com/devcontainers/base:ubuntu

# Install cross compilers + QEMU
RUN apt-get update && apt-get install -y \
    build-essential \
    meson \
    ninja-build \
    xorriso \
    qemu-system \
    qemu-utils \
    && apt-get clean \
    && /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)" \
    && echo >> ~/.bashrc \
    && echo 'eval "$(/home/linuxbrew/.linuxbrew/bin/brew shellenv)"' >> ~/.bashrc \
    && eval "$(/home/linuxbrew/.linuxbrew/bin/brew shellenv)" \
    && brew install x86_64-elf-gcc && brew install aarch64-elf-gcc && brew install riscv64-elf-gcc