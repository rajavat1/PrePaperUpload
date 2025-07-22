function RHS(n) {
  return (1.0 / 6.0) * n * (n + 1) * (2 * n + 1);
}

while (true) {
  // Get user input for n
  let n = parseInt(prompt("Enter a positive integer n: "));

  // Check if the input is a positive integer
  if (n <= 0) {
    console.log("Please provide a positive integer.");

  } else {
    // Calculate the sum using the RHS Function
    let formulaResult = RHS(n);
    console.log("Formula Result:", Math.round(formulaResult));

    // Calculate the sum using the actual summation
    let actualSum = 0;
    for (let i = 1; i <= n; i++) {
      actualSum += i ** 2;
    }
    console.log("Actual Result:", actualSum);

    // Compare the results
    if ((formulaResult == actualSum)) {
      console.log(`The formula [1^2 + 2^2 + 3^2 + ... + n^2 = (1/6) * n * (n+1) * (2n+1)] holds true for n = ${n}`);
    } else {
      console.log(`The formula does not hold true for n = ${n}`);
    }
    break;
  }
}