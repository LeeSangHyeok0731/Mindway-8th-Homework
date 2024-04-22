const textElement = document.getElementById("koreanText");
const koreanText = ['마', '인', '드', '웨', '이']
const a = '\n';
let sum;
for (let j = 0; j < 5; j++)
{
  for (let i = 0; i < 5; i++)
  {
    sum = i + j;
    if(sum >= 5)
    {
      sum = sum - 5;
    }
    console.log (koreanText[sum]);
  }
  console.log ("\n");
}
