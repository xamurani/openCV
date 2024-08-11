![image](https://github.com/user-attachments/assets/692da714-13e9-4abd-993a-dc58af75b17b)# openCV
This is a simple C++ project that demonstrates how to read, display, and save an image using the OpenCV library. The program loads an image from a specified file path, displays it in a window, and provides an option to save the image with a new name when the 's' key is pressed.

## Features

- Load an image from a specified file path.
- Display the image in a window.
- Save the image as a new file when the 's' key is pressed.

## Prerequisites

Before you begin, ensure you have the following installed:

- [OpenCV](https://opencv.org/) (version 4.x or later)
- A C++ compiler (e.g., GCC, MSVC)
- CMake (if you are using CMake to manage the build process)

## Getting Started

1. **Clone the repository:**

   ```bash
   git clone https://github.com/xamurani/openCV.git
   cd openCV

2. **Build the project:**

   ```bash
   mkdir build
   cd build
   cmake ..
   make

**Alternatively, you can compile directly with the C++ compiler:**
  ```bash
  g++ -o image_display main.cpp `pkg-config --cflags --libs opencv4

3. **Run the executable:**
  ```bash
  ./image_display
