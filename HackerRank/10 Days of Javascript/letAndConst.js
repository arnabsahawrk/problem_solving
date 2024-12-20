"use strict";

process.stdin.resume();
process.stdin.setEncoding("utf-8");

let inputString = "";
let currentLine = 0;

process.stdin.on("data", (inputStdin) => {
  inputString += inputStdin;
});

process.stdin.on("end", (_) => {
  inputString = inputString
    .trim()
    .split("\n")
    .map((string) => {
      return string.trim();
    });

  main();
});

function readLine() {
  return inputString[currentLine++];
}
function main() {
  // Read the radius from input
  const radius = parseFloat(readLine());

  // Declare PI as a constant
  const PI = Math.PI;

  // Calculate the area of the circle
  const area = PI * radius * radius;

  // Calculate the perimeter of the circle
  const perimeter = 2 * PI * radius;

  // Print the area of the circle
  console.log(area);

  // Print the perimeter of the circle
  console.log(perimeter);

  try {
    // Attempt to redefine the value of constant variable PI
    PI = 0;
    // Attempt to print the value of PI
    console.log(PI);
  } catch (error) {
    console.error("You correctly declared 'PI' as a constant.");
  }
}
