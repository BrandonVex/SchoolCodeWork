const crypto = require('crypto');

function generatePassword(length = 12, includeUppercase = true, includeNumbers = true, includeSymbols = true) {
  const lowercaseChars = 'abcdefghijklmnopqrstuvwxyz';
  const uppercaseChars = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
  const numberChars = '0123456789';
  const symbolChars = '!@#$%^&*()-_+=<>?';

  let validChars = lowercaseChars;
  if (includeUppercase) validChars += uppercaseChars;
  if (includeNumbers) validChars += numberChars;
  if (includeSymbols) validChars += symbolChars;

  let password = '';
  for (let i = 0; i < length; i++) {
    const randomIndex = crypto.randomInt(0, validChars.length);
    password += validChars.charAt(randomIndex);
  }

  return password;
}

const password = generatePassword(16, true, true, true);
console.log('Generated Password:', password);
