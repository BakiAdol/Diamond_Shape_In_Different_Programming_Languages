let Height = 9,
  Mid = Math.floor(Height / 2);

for (let row = 0; row < Height; row++) {
  if (row > Mid) {
    for (let col = 0; col < row - Mid; col++) {
      process.stdout.write(" ");
    }
    for (let col = row - Mid; col < Height - row + Mid; col++) {
      process.stdout.write("*");
    }
  } else {
    for (let col = 0; col < Mid - row; col++) {
      process.stdout.write(" ");
    }
    for (let col = Mid - row; col <= Mid + row; col++) {
      process.stdout.write("*");
    }
  }
  console.log();
}
