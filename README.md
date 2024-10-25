
# Project Setup

This project demonstrates how to compile C code to WebAssembly.

## Getting Started

### Install Dependencies:

```bash
npm install
```

### Start the Application:

```bash
npm run start
```

## Compiling C to WebAssembly

This project utilizes Emscripten (emcc) to compile C code into WebAssembly.

### Example: To compile a C file named hello.c, use the following command:

```bash
emcc hello.c -o hello.js -s EXPORTED_FUNCTIONS='["_hello", "_main"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s MODULARIZE -s EXPORT_NAME='createModule'
```

### Explanation of Flags:

- **EXPORTED_FUNCTIONS**: Specifies the C functions you want to be accessible from your JavaScript code.
- **EXPORTED_RUNTIME_METHODS**: Exports runtime methods like `cwrap`, allowing you to call C functions from JavaScript.
- **MODULARIZE**: Wraps the WebAssembly module in a function, enabling you to create instances as needed.
- **EXPORT_NAME**: Defines the name of the function used to create the module.

### For Further Information:

Refer to the [Emscripten documentation](https://emscripten.org/docs/) for detailed information on compiling C to WebAssembly.

Use Google or ChatGPT to explore additional resources and tutorials.
