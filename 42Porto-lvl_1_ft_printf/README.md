<p align="center">
  <img src="https://github.com/leogaudin/42_project_badges/blob/main/badges/ft_printf.webp" alt="ft_printf"></br>
  <img src="https://img.shields.io/badge/Ft_Printf-100%2F100-green?style=flat-square&color=green" alt="mamaral-'s 42 Ft_Printf Score" />
</p>


# The ft_printf Project

The **ft_printf** project is part of the 42 curriculum and its goal is to **reimplement the standard C `printf()` function from scratch**.  
By doing so, you will learn how to handle *variadic functions*, how to manage output formatting, and how to ensure efficient memory usage.

Once completed, the lib `ft_printf()` become part of my **libft**, making it available for use in other projects.

---

## 📌 Project Overview

I need to create a library named **`libftprintf.a`** containing the implementation of `ft_printf()` which replicates the behaviour of the standard `printf()` with a limited set of conversion specifiers.

The key challenge is **handling a variable number of arguments** while producing formatted output exactly as specified.

---

## 🛠️ Mandatory Conversion Specifiers

Your `ft_printf()` must handle these conversions:

| **Specifier** | **Description**                 |
|:-------------:|---------------------------------|
| `%c`          | Prints a single character       |
| `%s`          | Prints a string                 |
| `%p`          | Prints a pointer address        |
| `%d` / `%i`   | Prints a signed integer         |
| `%u`          | Prints an unsigned integer      |
| `%x`          | Prints a hexadecimal (lowercase)|
| `%X`          | Prints a hexadecimal (uppercase)|
| `%%`          | Prints a percent sign           |

---

## ✨ Main Features

- Use of **`stdarg.h`** to manage variadic arguments.
- Reproduction of `printf`’s output formatting for the required specifiers.
- **No memory leaks** — all allocated memory must be freed.
- Fully compliant with the **42 Norm** coding style.

---

## 📂 Project Structure

Your repository must include:

- A `Makefile` with at least the rules: `NAME`, `all`, `clean`, `fclean`, `re`, and `bonus`.
- All source (`.c`) and header (`.h`) files.

---

## ✅ Benefits of This Project

- Improves understanding of **low-level C programming**.
- Teaches how to use **variadic functions** effectively.
- Reinforces **formatting and parsing logic**.
- Adds a **reusable, custom printing function** for future projects.

---

## 📖 Conclusion

The **ft_printf** is a moderately difficult but highly rewarding project.  
By completing it, you will gain deeper skills in formatting, parsing, memory management, and reusable library design — all crucial for more complex projects ahead.

---

