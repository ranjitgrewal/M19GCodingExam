em++ -s WASM=1 --bind -o mulitply.js multiply.cpp
em++ -s WASM= 1 --bind -o multiply.js multiply.cpp --js-library multiply_in.js
em++ -s WASM=1 --bind -o multiply.js multiply.cpp --js-library multiply_in.js
