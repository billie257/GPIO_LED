# README

基于stm32 standard peripheral libraries的LED驱动

## 核心功能

* 功能点 1：实现了DevEBox 基础板stm32f407zgt6的LED点亮熄灭基础控制功能
* 功能点 2：分支flow breath wave分别实现了流水灯，呼吸灯，浪潮灯效果
* 功能点 3：借助结构体实现面向对象式封装，配合前向声明规避头文件循环依赖
* 功能点 4：基于 SysTick 定时器实现 SOS 灯光闪烁功能，针对其 24 位 LOAD 寄存器溢出、定时时长无法超过 100ms 的问题完成优化，现已支持自定义 100ms 以上的闪烁间隔。

## 运行环境与依赖

* **操作系统**：Windows 11
* **依赖库**：stm32 standard peripheral libraries







