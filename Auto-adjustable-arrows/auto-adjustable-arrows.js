function arrow(pointSize, footLength) {
  let col = pointSize * 2 - 1;
  // pointy part
  for (let i = 1; i <= pointSize; i++) {
    let s = '';
    for (let j = 1; j <= col; j++) {
      if (j >= pointSize + 1 - i && j <= pointSize - 1 + i) {
        s += '$';
      } else {
        s += ' ';
      }
    }
    console.log(s);
  }

  // foot
  s = '';
  // find out how wide is the last row of the pointy part
  const lastRow = 1 + (pointSize - 1) * 2;
  // let the foot take around 1/3 of that
  let footWidth = Math.round(lastRow / 3);
  // check if it can be centered and if not, make it one size smaller
  if (!Number.isInteger((lastRow - footWidth) / 2)) footWidth--;
  // find where the arrow feet
  const foodStart = (lastRow - footWidth) / 2;

  for (let i = 0; i < footLength; i++) {
    for (let l = 0; l <= lastRow; l++) {
      if (l < foodStart) {
        s += ' ';
      } else if (l >= foodStart && l < lastRow - foodStart) {
        s += '$';
      } else {
        s += ' ';
      }
    }
    s += '\n';
  }

  console.log(s);
}

arrow(15, 4);
arrow(3, 2);
arrow(9, 8);
arrow(30, 1);
