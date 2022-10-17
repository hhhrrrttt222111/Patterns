// *       **       **       **       **       **       **       **       **       **       **       **       *
//  *     *  *     *  *     *  *     *  *     *  *     *  *     *  *     *  *     *  *     *  *     *  *     *
//   *   *    *   *    *   *    *   *    *   *    *   *    *   *    *   *    *   *    *   *    *   *    *   *
//    * *      * *      * *      * *      * *      * *      * *      * *      * *      * *      * *      * *

let waves = 12;
let waveLength = 7;
let waveHeight = 4;

const printLine = (n) => {
  const spacesMiddle = waveLength - 2 * n;
  const pattern = `${" ".repeat(n)}*${" ".repeat(spacesMiddle)}*${" ".repeat(n)}`;
  console.log(pattern.repeat(waves));
};

for (let i = 0; i < waveHeight; i++) {
  printLine(i);
}
