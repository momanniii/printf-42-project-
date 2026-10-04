# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    README.md                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abalmoma <abalmoma@learner.42.tech>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/10/01 22:33:34 by abalmoma          #+#    #+#              #
#    Updated: 2026/10/01 22:34:00 by abalmoma         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

*This activity has been created as part of the 42 curriculum by abalmoma.*

# ft_printf

## Description
The goal of this project is to recreate the famous `printf` function from the C standard library. 

This is a great way to learn about **variadic functions** (functions that can take an unlimited number of arguments). The custom `ft_printf` function works just like the original one and can handle the following formats:
*   **`%c`** : Prints a single character.
*   **`%s`** : Prints a string of text.
*   **`%p`** : Prints a memory address (pointer).
*   **`%d`** & **`%i`** : Print standard numbers.
*   **`%u`** : Prints a positive (unsigned) number.
*   **`%x`** & **`%X`** : Print numbers in lowercase and uppercase hex format.
*   **`%%`** : Prints a normal `%` sign.

## Algorithm and Data Structures
To make this work with an unknown number of arguments, I used the `va_list` tool from the `` library. 

Here is how the logic flows in simple steps:
*   **Reading the Text:** A loop reads your string one character at a time. Normal letters are printed directly to the screen.
*   **The Dispatcher:** When the loop hits a `%` sign, it checks the very next letter (like `s` or `d`). Based on that letter, it sends the data to a specific helper function to do the heavy lifting.
*   **Math for Numbers:** To print big numbers, the algorithm uses recursion. It keeps dividing the number by 10 (or 16) until it reaches single digits, then prints them in the correct order.
*   **Handling Pointers:** Memory addresses are massive numbers. The program treats them as `unsigned long` types, adds `0x` at the start, and safely handles cases where the pointer is completely empty (`NULL`).

## Instructions

**1. How to Compile**
Use the provided `Makefile` to build the tool. Just open your terminal and run:
```bash
make
