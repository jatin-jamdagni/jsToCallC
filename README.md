��#   Just trying on someone approch
 
# Project Setup

To get started, install dependencies and start the application:

```bash
npm install
npm run start ```

```bash
emcc hello.c -o hello.js -s EXPORTED_FUNCTIONS='["_hello", "_main"]' -s EXPORTED_RUNTIME_METHODS='["cwrap"]' -s MODULARIZE -s EXPORT_NAME='createModule'```

More 
EXPORTED_FUNCTIONS: Specifies which functions should be available in WebAssembly.
EXPORTED_RUNTIME_METHODS: Exports runtime methods like cwrap, which lets you call C functions from JavaScript.
MODULARIZE and EXPORT_NAME: Wraps the WebAssembly module in a function, letting you create instances as needed.
For further information on compiling C to WebAssembly, refer to Emscripten documentation.

To learn more, use Google or ChatGPT to explore additional resources.
