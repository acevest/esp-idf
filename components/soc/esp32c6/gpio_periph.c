// Copyright 2020 Espressif Systems (Shanghai) PTE LTD
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "soc/gpio_periph.h"

const uint32_t GPIO_PIN_MUX_REG[SOC_GPIO_PIN_COUNT] = {
    IO_MUX_GPIO0_REG,
    IO_MUX_GPIO1_REG,
    IO_MUX_GPIO2_REG,
    IO_MUX_GPIO3_REG,
    IO_MUX_GPIO4_REG,
    IO_MUX_GPIO5_REG,
    IO_MUX_GPIO6_REG,
    IO_MUX_GPIO7_REG,
    IO_MUX_GPIO8_REG,
    IO_MUX_GPIO9_REG,
    IO_MUX_GPIO10_REG,
    IO_MUX_GPIO11_REG,
    IO_MUX_GPIO12_REG,
    IO_MUX_GPIO13_REG,
    IO_MUX_GPIO14_REG,
    IO_MUX_GPIO15_REG,
    IO_MUX_GPIO16_REG,
    IO_MUX_GPIO17_REG,
    IO_MUX_GPIO18_REG,
    IO_MUX_GPIO19_REG,
    IO_MUX_GPIO20_REG,
    IO_MUX_GPIO21_REG,
    IO_MUX_GPIO22_REG,
    IO_MUX_GPIO23_REG,
    IO_MUX_GPIO24_REG,
    IO_MUX_GPIO25_REG,
    IO_MUX_GPIO26_REG,
    IO_MUX_GPIO27_REG,
    IO_MUX_GPIO28_REG,
    IO_MUX_GPIO29_REG,
    IO_MUX_GPIO30_REG,
    IO_MUX_GPIO31_REG,
    IO_MUX_GPIO32_REG,
    IO_MUX_GPIO33_REG,
    IO_MUX_GPIO34_REG,
    IO_MUX_GPIO35_REG,
    IO_MUX_GPIO36_REG,
    IO_MUX_GPIO37_REG,
    IO_MUX_GPIO38_REG,
    IO_MUX_GPIO39_REG,
    IO_MUX_GPIO40_REG,
    IO_MUX_GPIO41_REG,
    IO_MUX_GPIO42_REG,
    IO_MUX_GPIO43_REG,
    IO_MUX_GPIO44_REG,
    IO_MUX_GPIO45_REG,
};

const uint32_t GPIO_HOLD_MASK[SOC_GPIO_PIN_COUNT] = {
    BIT(0),     //GPIO0
    BIT(1),     //GPIO1
    BIT(2),     //GPIO2
    BIT(3),     //GPIO3
    BIT(4),     //GPIO4
    BIT(5),     //GPIO5
    BIT(5),     //GPIO6
    BIT(6),     //GPIO7
    BIT(3),     //GPIO8
    BIT(4),     //GPIO9
    BIT(0),     //GPIO10
    BIT(15),    //GPIO11
    BIT(10),    //GPIO12
    BIT(12),    //GPIO13
    BIT(8),     //GPIO14
    BIT(7),     //GPIO15
    BIT(9),     //GPIO16
    BIT(11),    //GPIO17
    BIT(1),     //GPIO18
    BIT(2),     //GPIO19
    BIT(13),    //GPIO20
    BIT(14),    //GPIO21
};