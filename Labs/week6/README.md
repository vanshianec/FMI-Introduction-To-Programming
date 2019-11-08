### Задачи за практикум 6

#### Зад.1
Да се напише програма, която приема като вход цяло положително число `n`, последвано от `n` числа и извежда:  
- елементите в реда, в който са били въведени

  |Вход                  | Изход           |
  | -----------          | -----------     |
  | 5 <br> 1 0 9 4 5     | 1 0 9 4 5       |
  | 1 <br> 6             | 6               |
- елементите в ред, oбратен на този, в който са били въведени

    |Вход                  | Изход           |
    | -----------          | -----------     |
    | 5 <br> 1 0 9 4 5     | 5 4 9 0 1       |
    | 1 <br> 6             | 6               |
- нека сега приемаме от входа и число `k`, ще извеждаме числата циклично от `k`-тото нататък, тоест: 

   |Вход                       | Изход           | Обяснение |
   | -----------               | -----------     |-----------|
   | 5 <br>3<br> 1 0 9 4 5     | 9 4 5 1 0       | `k` е 3 тоест разглеждаме от 3тия елемент (9) до края 												-> 9 4 5 <br>  и после от началото до `k-1`-вия -> 1 0|
   | 6 <br> 6 <br> 1 2 3 4 5 6 | 6 1 2 3 4 5     | `k` има стойност `n` тоест принтираме последния елемент <br> и после всички останали в реда, в който са въведени|
   | 6 <br> 1 <br> 1 2 3 4 5 6 | 1 2 3 4 5 6     |`k` е едно, тоест тук разглеждаме случая, в който просто принтираме редицата|
  
#### Зад.2
В компютърна игра играчът поставя топчета от различни цветове в една линия. Когато се образува непрекъсната верига от три или повече топки от един и същи цвят, тя се отстранява от линията. В този случай всички топчета се изместват едно към друго и ситуацията може да се повтори. Напишете програма, която в тази ситуация определя колко топки ще бъдат „унищожени“. Нека програмата приема число `n`, последвано от `n` цвята.
Приемаме, че цветовете са числа от 0 до 9.

|Вход                  | Изход           |
| -----------          | -----------     |
| 6 <br> 5 1 3 3 3 2   | 3    |

#### Зад.3
Нека имаме два полинома **Pn(x)** и **Qm(x)**, зададени чрез своите коефициенти. Напишете програма, която извежда сумата на тези полиноми.  
**Вход:** 
- число n >= 0, последвано от n числа - коефициенти на Р
- число m >= 0, последвано от m числа - коефициенти на Q    
*Ясно е, че n и m са съответно степените на тези полиноми*  

**Изход:**
- коефициентите на полином от степен `m+n`, отговарящ на сумата на P и Q.

#### Зад. 4
Приемат се `n` цели числа и се проверява дали образуват *"трион"*, тоест a<sub>0</sub> < a<sub>1</sub> > a<sub>2</sub> < a<sub>3</sub> > a<sub>4</sub> ...

|Вход                  | Изход           |
| -----------          | -----------     |
| 6 <br> 3 4 1 8 2 23  | true            |
| 7 <br> 1 9 4 2 5 3 6 | false           |

#### Зад.5
Въвеждат се 2 числови редици, да се провери дали си приличат, тоест множеството от елементите на едната редица съвпада с множеството от елементите на втората редица.  

|Вход                            | Изход |
| -----------                    | ------|
|  3 4 1 8 2 5 <br> 2 3 1 5 4 8  | true  |
|4 5 2 6 1 <br> 1 4 4 2 5 5 6    | true  |
| 5 6 1 <br> 1 5 7 6             | false |

#### Зад. 6
Напишете програма, която приема 2 сортирани масива, тоест такива, чиито елементи са подредени по големина (от най-малкия към най-големия например) и ги *"слива"* в сортиран масив, тоест: 

|Вход                   | Изход          |Обяснeние         |
| -----------           | ------         |---               |
|  1 5 6 11 <br> 2 3 8  | 1 2 3 5 6 8 11 | Ще отбележим `така` елементите от първия: `1` 2 3 `5` `6` 8 `11`
| 1 2 3 <br> 4 5 6      | 1 2 3 4 5 6    | `1` `2` `3` 4 5 6|
| 5 9 11 <br> 1 3       | 1 3 5 9 11     | 1 3 `5` `9` `11` |
