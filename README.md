# 42fdf

42fdf is a 3D wireframe graphics renderer, part of the 42 school curriculum. This project reads a file containing a 3D map and displays it in isometric projection.

## Table of Contents
- [42fdf](#42fdf)
  - [Table of Contents](#table-of-contents)
  - [Introduction](#introduction)
  - [Features](#features)
  - [Installation](#installation)
  - [Usage](#usage)
  - [Project Structure](#project-structure)
  - [Makefile Targets](#makefile-targets)
  - [Credits](#credits)

## Introduction

The 42fdf project demonstrates the basics of computer graphics by rendering a 3D map using a wireframe model. This project involves:
- Reading and parsing a map file.
- Converting map data into a 3D model.
- Applying transformations and projecting the 3D model to a 2D plane.
- Rendering the wireframe representation of the 3D model.

## Features

- Load and parse 3D maps from files.
- Display the map in isometric projection.
- Basic key hooks for interaction.

## Installation

To compile the project, you need to have the MLX42 library and libft. Follow these steps to set up and compile the project:

1. Clone the repository:

    ```bash
    git clone https://github.com/flutterde/42fdf.git
    cd 42fdf
    ```

2. Install dependencies:
    - [MLX42](https://github.com/codam-coding-college/MLX42)

3. Build the project using the provided Makefile:

    ```bash
    make
    ```

## Usage

After building the project, run the executable with a map file as an argument:

```bash
./fdf path/to/map.fdf
```

## Project Structure

```plaintext
42fdf/
├── bonus/                  # Directory for bonus implementation
├── libft/                  # Libft library
├── mandatory/              # Mandatory part of the project
│   ├── map/                # Map handling functions
│   ├── src/                # Source files for rendering and interactions
│   ├── utils/              # Utility functions
│   ├── data_types.h        # Data type definitions
│   └── fdf.h               # Header file for main program
├── Makefile                # Makefile for building the project
└── README.md               # This README file
```

## Makefile Targets

- `all` - Builds the main program.
- `clean` - Removes object files.
- `fclean` - Removes object files and the executable.
- `re` - Rebuilds the project.
- `bonus` - Builds the bonus part of the project (if any).

Example usage:

```bash
make            # Compile the project
make clean      # Clean up object files
make fclean     # Clean up object files and executable
make re         # Rebuild the project from scratch
make bonus      # Compile the bonus part (if implemented)
```

## Credits

- [MLX42](https://github.com/codam-coding-college/MLX42) - Modern OpenGL-based graphics library.

Feel free to contribute, report issues, or request features via GitHub Issues and Pull Requests.
