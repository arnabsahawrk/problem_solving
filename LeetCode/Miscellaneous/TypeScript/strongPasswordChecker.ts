function strongPasswordChecker(password: string): number {
  // Constants for readability and easy adjustments
  const MIN_LENGTH = 6;
  const MAX_LENGTH = 20;
  const DIGIT_VIOLATION = 1;
  const LOWERCASE_VIOLATION = 1;
  const UPPERCASE_VIOLATION = 1;
  const REPEAT_LENGTH_THRESHOLD = 2;

  // Arrays to track repeated characters
  let repeatViolations: string[] = [];

  // Initial violation counts
  let digitViolation = DIGIT_VIOLATION;
  let lowerCaseViolation = LOWERCASE_VIOLATION;
  let upperCaseViolation = UPPERCASE_VIOLATION;

  let repeatChain = "";

  // Iterate through the password
  for (let index = 0; index < password.length; index++) {
    // Check for digit, lowercase, and uppercase violations
    if (!isNaN(parseInt(password[index]))) digitViolation = 0;
    else if (password[index] === password[index].toUpperCase())
      upperCaseViolation = 0;
    else if (password[index] === password[index].toLowerCase())
      lowerCaseViolation = 0;

    // Detect repeated characters
    if (index > 0 && password[index] === password[index - 1])
      repeatChain += password[index];
    else if (repeatChain.length > REPEAT_LENGTH_THRESHOLD) {
      repeatViolations.push(repeatChain);
      repeatChain = password[index];
    } else repeatChain = password[index];
  }

  // Handle the last repeated chain
  if (repeatChain.length > REPEAT_LENGTH_THRESHOLD)
    repeatViolations.push(repeatChain);

  // Calculate the sum of simple violations
  const simpleViolationsSum =
    lowerCaseViolation + upperCaseViolation + digitViolation;

  // Password length check and adjustments
  if (password.length < MIN_LENGTH) {
    // Additions required for a short password
    const minAdd = Math.max(0, MIN_LENGTH - password.length);
    const repeatSplitsEdits = repeatViolations.reduce(
      (edits, violation) => edits + Math.floor(violation.length / 3),
      0
    );
    return Math.max(minAdd, simpleViolationsSum, repeatSplitsEdits);
  } else if (password.length <= MAX_LENGTH) {
    // Password length is within limits
    const repeatSplitsEdits = repeatViolations.reduce(
      (edits, violation) => edits + Math.floor(violation.length / 3),
      0
    );
    return Math.max(simpleViolationsSum, repeatSplitsEdits);
  } else {
    // Excess length case
    let minDelete = Math.max(0, password.length - MAX_LENGTH);
    repeatViolations.sort((v, b) => (v.length % 3) - (b.length % 3));

    let change = true;
    // Reduce repeated characters to meet the length constraint
    while (change && minDelete > 0) {
      change = false;
      for (
        let index = 0;
        index < repeatViolations.length && minDelete > 0;
        index++
      ) {
        const violation = repeatViolations[index];
        if (violation.length > REPEAT_LENGTH_THRESHOLD) {
          change = true;
          const toRemove = Math.min(
            violation.length - REPEAT_LENGTH_THRESHOLD,
            minDelete,
            1 + (violation.length % 3)
          );
          minDelete -= toRemove;
          repeatViolations[index] = violation.substring(
            0,
            violation.length - toRemove
          );
        }
      }
    }

    // Calculate edits needed after reducing repeated characters
    const repeatSplitsEdits = repeatViolations.reduce(
      (edits, violation) => edits + Math.floor(violation.length / 3),
      0
    );
    return (
      password.length -
      MAX_LENGTH +
      Math.max(simpleViolationsSum, repeatSplitsEdits)
    );
  }
}
