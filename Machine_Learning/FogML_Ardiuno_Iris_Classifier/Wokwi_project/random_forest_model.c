/*
   Copyright 2021 FogML

   Licensed under the Apache License, Version 2.0 (the "License");
   you may not use this file except in compliance with the License.
   You may obtain a copy of the License at

       http://www.apache.org/licenses/LICENSE-2.0

   Unless required by applicable law or agreed to in writing, software
   distributed under the License is distributed on an "AS IS" BASIS,
   WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
   See the License for the specific language governing permissions and
   limitations under the License.
*/

int classifier(float * x){
  int results[100];
  if (x[3] <= 0.8000000119) {
    results[0] = 0;
  }
  else {
    if (x[0] <= 6.2500000000) {
      if (x[2] <= 4.8500001431) {
        if (x[2] <= 4.7500000000) {
          if (x[3] <= 1.6000000238) {
            results[0] = 1;
          }
          else {
            results[0] = 2;
          }
        }
        else {
          if (x[1] <= 3.0000000000) {
            results[0] = 2;
          }
          else {
            results[0] = 1;
          }
        }
      }
      else {
        results[0] = 2;
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[0] <= 6.3500001431) {
          if (x[3] <= 1.6499999762) {
            results[0] = 1;
          }
          else {
            results[0] = 2;
          }
        }
        else {
          results[0] = 1;
        }
      }
      else {
        results[0] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[1] = 0;
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[2] <= 4.7500000000) {
        if (x[3] <= 1.6500000358) {
          results[1] = 1;
        }
        else {
          results[1] = 2;
        }
      }
      else {
        if (x[0] <= 6.4000000954) {
          if (x[0] <= 5.9500000477) {
            results[1] = 1;
          }
          else {
            results[1] = 2;
          }
        }
        else {
          results[1] = 1;
        }
      }
    }
    else {
      if (x[2] <= 5.1499998569) {
        if (x[3] <= 1.7500000000) {
          results[1] = 1;
        }
        else {
          results[1] = 2;
        }
      }
      else {
        results[1] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[2] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[3] <= 1.6500000358) {
        results[2] = 1;
      }
      else {
        results[2] = 2;
      }
    }
    else {
      if (x[0] <= 6.5999999046) {
        results[2] = 2;
      }
      else {
        if (x[2] <= 5.0999999046) {
          results[2] = 1;
        }
        else {
          results[2] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[3] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[3] <= 1.6500000358) {
        results[3] = 1;
      }
      else {
        results[3] = 2;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.3499999046) {
          if (x[2] <= 5.0499999523) {
            results[3] = 1;
          }
          else {
            if (x[0] <= 6.1500000954) {
              results[3] = 1;
            }
            else {
              results[3] = 2;
            }
          }
        }
        else {
          results[3] = 2;
        }
      }
      else {
        if (x[0] <= 5.9500000477) {
          if (x[2] <= 4.8500001431) {
            results[3] = 1;
          }
          else {
            results[3] = 2;
          }
        }
        else {
          results[3] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[4] = 0;
  }
  else {
    if (x[0] <= 6.4500000477) {
      if (x[3] <= 1.6500000358) {
        if (x[1] <= 2.6499999762) {
          if (x[2] <= 5.2500000000) {
            results[4] = 1;
          }
          else {
            results[4] = 2;
          }
        }
        else {
          results[4] = 1;
        }
      }
      else {
        results[4] = 2;
      }
    }
    else {
      if (x[2] <= 5.0000000000) {
        results[4] = 1;
      }
      else {
        results[4] = 2;
      }
    }
  }
  if (x[2] <= 4.7500000000) {
    if (x[2] <= 2.4499999881) {
      results[5] = 0;
    }
    else {
      if (x[0] <= 4.9500000477) {
        if (x[1] <= 2.4500000477) {
          results[5] = 1;
        }
        else {
          results[5] = 2;
        }
      }
      else {
        results[5] = 1;
      }
    }
  }
  else {
    if (x[3] <= 1.8499999642) {
      if (x[1] <= 3.0499999523) {
        if (x[0] <= 6.5999999046) {
          results[5] = 2;
        }
        else {
          if (x[2] <= 5.4000000954) {
            results[5] = 1;
          }
          else {
            results[5] = 2;
          }
        }
      }
      else {
        if (x[0] <= 6.1500000954) {
          results[5] = 1;
        }
        else {
          if (x[2] <= 5.2000000477) {
            results[5] = 1;
          }
          else {
            results[5] = 2;
          }
        }
      }
    }
    else {
      results[5] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[6] = 0;
  }
  else {
    if (x[2] <= 5.0499999523) {
      if (x[0] <= 4.9500000477) {
        if (x[2] <= 3.8999999762) {
          results[6] = 1;
        }
        else {
          results[6] = 2;
        }
      }
      else {
        if (x[3] <= 1.8499999642) {
          if (x[1] <= 2.9500000477) {
            results[6] = 1;
          }
          else {
            if (x[1] <= 3.0499999523) {
              if (x[0] <= 6.0000000000) {
                results[6] = 1;
              }
              else {
                if (x[0] <= 6.3999998569) {
                  results[6] = 2;
                }
                else {
                  results[6] = 1;
                }
              }
            }
            else {
              results[6] = 1;
            }
          }
        }
        else {
          results[6] = 2;
        }
      }
    }
    else {
      if (x[0] <= 6.0499999523) {
        if (x[1] <= 2.8500000238) {
          if (x[3] <= 1.7500000000) {
            results[6] = 1;
          }
          else {
            results[6] = 2;
          }
        }
        else {
          results[6] = 2;
        }
      }
      else {
        results[6] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[7] = 0;
  }
  else {
    if (x[2] <= 4.7000000477) {
      if (x[0] <= 4.9500000477) {
        if (x[2] <= 3.8999999762) {
          results[7] = 1;
        }
        else {
          results[7] = 2;
        }
      }
      else {
        results[7] = 1;
      }
    }
    else {
      if (x[3] <= 1.6999999881) {
        if (x[0] <= 7.0499999523) {
          results[7] = 1;
        }
        else {
          results[7] = 2;
        }
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[0] <= 5.9500000477) {
            results[7] = 1;
          }
          else {
            results[7] = 2;
          }
        }
        else {
          results[7] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[8] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        if (x[0] <= 5.0499999523) {
          if (x[1] <= 2.4500000477) {
            results[8] = 1;
          }
          else {
            results[8] = 2;
          }
        }
        else {
          results[8] = 1;
        }
      }
      else {
        if (x[0] <= 6.0499999523) {
          results[8] = 1;
        }
        else {
          results[8] = 2;
        }
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[2] <= 4.8500001431) {
          results[8] = 1;
        }
        else {
          results[8] = 2;
        }
      }
      else {
        results[8] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[3] <= 0.8000000119) {
      results[9] = 0;
    }
    else {
      results[9] = 1;
    }
  }
  else {
    if (x[3] <= 1.6999999881) {
      if (x[2] <= 2.5499999523) {
        results[9] = 0;
      }
      else {
        if (x[2] <= 4.9500000477) {
          results[9] = 1;
        }
        else {
          if (x[2] <= 5.3499999046) {
            if (x[2] <= 5.0499999523) {
              results[9] = 2;
            }
            else {
              results[9] = 1;
            }
          }
          else {
            results[9] = 2;
          }
        }
      }
    }
    else {
      results[9] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[10] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[2] <= 4.9500000477) {
        results[10] = 1;
      }
      else {
        if (x[3] <= 1.5500000119) {
          results[10] = 2;
        }
        else {
          results[10] = 1;
        }
      }
    }
    else {
      results[10] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[11] = 0;
  }
  else {
    if (x[0] <= 5.7500000000) {
      if (x[2] <= 4.7000000477) {
        results[11] = 1;
      }
      else {
        results[11] = 2;
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[2] <= 4.7500000000) {
          results[11] = 1;
        }
        else {
          if (x[3] <= 1.7500000000) {
            if (x[0] <= 6.1500000954) {
              results[11] = 2;
            }
            else {
              results[11] = 1;
            }
          }
          else {
            results[11] = 2;
          }
        }
      }
      else {
        if (x[0] <= 6.0499999523) {
          if (x[0] <= 5.9000000954) {
            results[11] = 2;
          }
          else {
            results[11] = 1;
          }
        }
        else {
          results[11] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[12] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[2] <= 4.9500000477) {
        results[12] = 1;
      }
      else {
        results[12] = 2;
      }
    }
    else {
      if (x[1] <= 3.1499999762) {
        results[12] = 2;
      }
      else {
        if (x[2] <= 5.1000001431) {
          results[12] = 1;
        }
        else {
          results[12] = 2;
        }
      }
    }
  }
  if (x[2] <= 4.7500000000) {
    if (x[3] <= 0.8000000119) {
      results[13] = 0;
    }
    else {
      if (x[0] <= 4.9500000477) {
        results[13] = 2;
      }
      else {
        results[13] = 1;
      }
    }
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[1] <= 2.8999999762) {
        if (x[0] <= 6.5000000000) {
          results[13] = 2;
        }
        else {
          results[13] = 1;
        }
      }
      else {
        results[13] = 2;
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[0] <= 6.5000000000) {
          results[13] = 2;
        }
        else {
          results[13] = 1;
        }
      }
      else {
        results[13] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[14] = 0;
  }
  else {
    if (x[0] <= 6.1499998569) {
      if (x[2] <= 4.7500000000) {
        if (x[0] <= 4.9500000477) {
          if (x[2] <= 3.8999999762) {
            results[14] = 1;
          }
          else {
            results[14] = 2;
          }
        }
        else {
          results[14] = 1;
        }
      }
      else {
        if (x[1] <= 3.1000000238) {
          if (x[0] <= 5.9500000477) {
            results[14] = 2;
          }
          else {
            if (x[2] <= 5.0499999523) {
              results[14] = 2;
            }
            else {
              if (x[3] <= 1.5000000000) {
                results[14] = 2;
              }
              else {
                results[14] = 1;
              }
            }
          }
        }
        else {
          results[14] = 1;
        }
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        results[14] = 1;
      }
      else {
        results[14] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[15] = 0;
  }
  else {
    if (x[3] <= 1.6999999881) {
      if (x[3] <= 1.5500000119) {
        if (x[2] <= 5.2500000000) {
          results[15] = 1;
        }
        else {
          results[15] = 2;
        }
      }
      else {
        if (x[2] <= 5.4500000477) {
          results[15] = 1;
        }
        else {
          results[15] = 2;
        }
      }
    }
    else {
      results[15] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[16] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[3] <= 1.6499999762) {
        results[16] = 1;
      }
      else {
        if (x[1] <= 3.0000000000) {
          results[16] = 2;
        }
        else {
          results[16] = 1;
        }
      }
    }
    else {
      if (x[2] <= 5.2000000477) {
        if (x[3] <= 1.7500000000) {
          if (x[1] <= 2.3500000238) {
            results[16] = 2;
          }
          else {
            if (x[1] <= 2.7500000000) {
              results[16] = 1;
            }
            else {
              if (x[1] <= 2.8999999762) {
                results[16] = 2;
              }
              else {
                results[16] = 1;
              }
            }
          }
        }
        else {
          results[16] = 2;
        }
      }
      else {
        results[16] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[17] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      results[17] = 1;
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.7500000000) {
          if (x[0] <= 6.1500000954) {
            results[17] = 2;
          }
          else {
            results[17] = 1;
          }
        }
        else {
          results[17] = 2;
        }
      }
      else {
        if (x[0] <= 6.0999999046) {
          if (x[0] <= 5.9500000477) {
            results[17] = 2;
          }
          else {
            results[17] = 1;
          }
        }
        else {
          results[17] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[18] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[0] <= 4.9500000477) {
        results[18] = 2;
      }
      else {
        results[18] = 1;
      }
    }
    else {
      if (x[2] <= 5.1499998569) {
        if (x[3] <= 1.7500000000) {
          if (x[1] <= 2.3500000238) {
            results[18] = 2;
          }
          else {
            if (x[2] <= 5.0499999523) {
              results[18] = 1;
            }
            else {
              if (x[1] <= 2.7500000000) {
                results[18] = 1;
              }
              else {
                results[18] = 2;
              }
            }
          }
        }
        else {
          results[18] = 2;
        }
      }
      else {
        results[18] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.4499999881) {
      results[19] = 0;
    }
    else {
      if (x[3] <= 1.5500000119) {
        results[19] = 1;
      }
      else {
        results[19] = 2;
      }
    }
  }
  else {
    if (x[2] <= 5.2000000477) {
      if (x[3] <= 1.7500000000) {
        if (x[1] <= 3.4500000477) {
          if (x[3] <= 1.4499999881) {
            results[19] = 1;
          }
          else {
            if (x[0] <= 6.1500000954) {
              if (x[2] <= 5.0499999523) {
                if (x[2] <= 4.7500000000) {
                  results[19] = 1;
                }
                else {
                  results[19] = 2;
                }
              }
              else {
                results[19] = 1;
              }
            }
            else {
              results[19] = 1;
            }
          }
        }
        else {
          results[19] = 0;
        }
      }
      else {
        results[19] = 2;
      }
    }
    else {
      results[19] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[20] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.3499999046) {
        results[20] = 1;
      }
      else {
        results[20] = 2;
      }
    }
    else {
      results[20] = 2;
    }
  }
  if (x[2] <= 2.5999999642) {
    results[21] = 0;
  }
  else {
    if (x[3] <= 1.5500000119) {
      results[21] = 1;
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.8499999642) {
          if (x[1] <= 2.8999999762) {
            results[21] = 2;
          }
          else {
            results[21] = 1;
          }
        }
        else {
          results[21] = 2;
        }
      }
      else {
        results[21] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[22] = 0;
  }
  else {
    if (x[3] <= 1.6999999881) {
      if (x[2] <= 4.9500000477) {
        results[22] = 1;
      }
      else {
        results[22] = 2;
      }
    }
    else {
      results[22] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[23] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[3] <= 1.6500000358) {
        results[23] = 1;
      }
      else {
        results[23] = 2;
      }
    }
    else {
      if (x[1] <= 2.7500000000) {
        if (x[2] <= 4.9500000477) {
          if (x[3] <= 1.6499999762) {
            results[23] = 1;
          }
          else {
            results[23] = 2;
          }
        }
        else {
          if (x[0] <= 6.0499999523) {
            if (x[2] <= 5.0499999523) {
              results[23] = 2;
            }
            else {
              results[23] = 1;
            }
          }
          else {
            results[23] = 2;
          }
        }
      }
      else {
        results[23] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[24] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[3] <= 1.6000000238) {
        results[24] = 1;
      }
      else {
        if (x[1] <= 3.0000000000) {
          results[24] = 2;
        }
        else {
          results[24] = 1;
        }
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.7500000000) {
          results[24] = 1;
        }
        else {
          results[24] = 2;
        }
      }
      else {
        if (x[1] <= 2.7500000000) {
          if (x[3] <= 1.6999999881) {
            if (x[3] <= 1.5000000000) {
              results[24] = 2;
            }
            else {
              results[24] = 1;
            }
          }
          else {
            results[24] = 2;
          }
        }
        else {
          results[24] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[25] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[1] <= 2.5499999523) {
        if (x[3] <= 1.6000000238) {
          results[25] = 1;
        }
        else {
          results[25] = 2;
        }
      }
      else {
        results[25] = 1;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.4500000477) {
          if (x[1] <= 2.7500000000) {
            results[25] = 1;
          }
          else {
            if (x[0] <= 6.5000000000) {
              results[25] = 2;
            }
            else {
              results[25] = 1;
            }
          }
        }
        else {
          results[25] = 2;
        }
      }
      else {
        results[25] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[26] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 5.9000000954) {
        results[26] = 1;
      }
      else {
        if (x[2] <= 4.9500000477) {
          results[26] = 1;
        }
        else {
          if (x[1] <= 2.8999999762) {
            results[26] = 2;
          }
          else {
            results[26] = 1;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[0] <= 6.0000000000) {
          results[26] = 1;
        }
        else {
          results[26] = 2;
        }
      }
      else {
        results[26] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.4499999881) {
      results[27] = 0;
    }
    else {
      if (x[3] <= 1.5500000119) {
        results[27] = 1;
      }
      else {
        results[27] = 2;
      }
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 2.6000000238) {
        results[27] = 0;
      }
      else {
        if (x[2] <= 5.0499999523) {
          results[27] = 1;
        }
        else {
          results[27] = 2;
        }
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[2] <= 4.8500001431) {
          results[27] = 1;
        }
        else {
          results[27] = 2;
        }
      }
      else {
        results[27] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[28] = 0;
  }
  else {
    if (x[0] <= 6.3500001431) {
      if (x[3] <= 1.6500000358) {
        if (x[3] <= 1.3499999642) {
          results[28] = 1;
        }
        else {
          if (x[1] <= 2.7500000000) {
            if (x[0] <= 6.1499998569) {
              results[28] = 2;
            }
            else {
              results[28] = 1;
            }
          }
          else {
            results[28] = 1;
          }
        }
      }
      else {
        results[28] = 2;
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        results[28] = 1;
      }
      else {
        results[28] = 2;
      }
    }
  }
  if (x[3] <= 1.6500000358) {
    if (x[3] <= 0.8000000119) {
      results[29] = 0;
    }
    else {
      if (x[2] <= 4.9500000477) {
        results[29] = 1;
      }
      else {
        if (x[3] <= 1.5500000119) {
          results[29] = 2;
        }
        else {
          results[29] = 1;
        }
      }
    }
  }
  else {
    if (x[2] <= 5.0499999523) {
      if (x[2] <= 4.9500000477) {
        results[29] = 2;
      }
      else {
        if (x[1] <= 2.7500000000) {
          results[29] = 2;
        }
        else {
          results[29] = 1;
        }
      }
    }
    else {
      results[29] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[30] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[1] <= 2.2500000000) {
        if (x[2] <= 4.5000000000) {
          results[30] = 1;
        }
        else {
          results[30] = 2;
        }
      }
      else {
        if (x[1] <= 2.6499999762) {
          if (x[3] <= 1.3499999642) {
            results[30] = 1;
          }
          else {
            if (x[0] <= 6.2000000477) {
              results[30] = 2;
            }
            else {
              results[30] = 1;
            }
          }
        }
        else {
          results[30] = 1;
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[1] <= 3.1000000238) {
          results[30] = 2;
        }
        else {
          results[30] = 1;
        }
      }
      else {
        results[30] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[1] <= 2.8500000238) {
      if (x[2] <= 2.2999999523) {
        results[31] = 0;
      }
      else {
        results[31] = 1;
      }
    }
    else {
      results[31] = 0;
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[1] <= 3.4500000477) {
        if (x[2] <= 4.9500000477) {
          results[31] = 1;
        }
        else {
          if (x[2] <= 5.4500000477) {
            if (x[3] <= 1.5500000119) {
              results[31] = 2;
            }
            else {
              results[31] = 1;
            }
          }
          else {
            results[31] = 2;
          }
        }
      }
      else {
        results[31] = 0;
      }
    }
    else {
      results[31] = 2;
    }
  }
  if (x[2] <= 2.5999999642) {
    results[32] = 0;
  }
  else {
    if (x[2] <= 5.1499998569) {
      if (x[3] <= 1.6500000358) {
        if (x[2] <= 5.0000000000) {
          results[32] = 1;
        }
        else {
          if (x[3] <= 1.5500000119) {
            results[32] = 2;
          }
          else {
            results[32] = 1;
          }
        }
      }
      else {
        if (x[1] <= 2.8999999762) {
          results[32] = 2;
        }
        else {
          results[32] = 1;
        }
      }
    }
    else {
      results[32] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[33] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[3] <= 1.6500000358) {
        results[33] = 1;
      }
      else {
        results[33] = 2;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[0] <= 6.5000000000) {
          if (x[3] <= 1.5500000119) {
            results[33] = 2;
          }
          else {
            results[33] = 1;
          }
        }
        else {
          results[33] = 1;
        }
      }
      else {
        results[33] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[34] = 0;
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[3] <= 1.6000000238) {
        results[34] = 1;
      }
      else {
        if (x[1] <= 3.1000000238) {
          results[34] = 2;
        }
        else {
          results[34] = 1;
        }
      }
    }
    else {
      results[34] = 2;
    }
  }
  if (x[2] <= 2.5999999642) {
    results[35] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.3499999046) {
        if (x[2] <= 5.0499999523) {
          results[35] = 1;
        }
        else {
          if (x[0] <= 6.1500000954) {
            results[35] = 1;
          }
          else {
            results[35] = 2;
          }
        }
      }
      else {
        results[35] = 2;
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[1] <= 3.1000000238) {
          results[35] = 2;
        }
        else {
          results[35] = 1;
        }
      }
      else {
        results[35] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.4499999881) {
      results[36] = 0;
    }
    else {
      results[36] = 1;
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 2.6000000238) {
        results[36] = 0;
      }
      else {
        if (x[3] <= 1.3499999642) {
          results[36] = 1;
        }
        else {
          if (x[1] <= 2.6499999762) {
            if (x[0] <= 6.1499998569) {
              results[36] = 2;
            }
            else {
              results[36] = 1;
            }
          }
          else {
            if (x[0] <= 7.0999999046) {
              if (x[2] <= 5.0499999523) {
                results[36] = 1;
              }
              else {
                if (x[0] <= 6.1500000954) {
                  results[36] = 1;
                }
                else {
                  results[36] = 2;
                }
              }
            }
            else {
              results[36] = 2;
            }
          }
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[0] <= 5.9500000477) {
          results[36] = 1;
        }
        else {
          results[36] = 2;
        }
      }
      else {
        results[36] = 2;
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[37] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 7.0999999046) {
        if (x[2] <= 4.9500000477) {
          results[37] = 1;
        }
        else {
          if (x[3] <= 1.5500000119) {
            results[37] = 2;
          }
          else {
            results[37] = 1;
          }
        }
      }
      else {
        results[37] = 2;
      }
    }
    else {
      results[37] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[38] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[3] <= 1.5500000119) {
        if (x[2] <= 4.9500000477) {
          results[38] = 1;
        }
        else {
          results[38] = 2;
        }
      }
      else {
        if (x[2] <= 5.4500000477) {
          results[38] = 1;
        }
        else {
          results[38] = 2;
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[0] <= 5.9500000477) {
          results[38] = 1;
        }
        else {
          results[38] = 2;
        }
      }
      else {
        results[38] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[39] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.3499999046) {
        if (x[0] <= 4.9500000477) {
          if (x[2] <= 3.8999999762) {
            results[39] = 1;
          }
          else {
            results[39] = 2;
          }
        }
        else {
          results[39] = 1;
        }
      }
      else {
        results[39] = 2;
      }
    }
    else {
      results[39] = 2;
    }
  }
  if (x[2] <= 2.5999999642) {
    results[40] = 0;
  }
  else {
    if (x[0] <= 6.1499998569) {
      if (x[3] <= 1.6500000358) {
        results[40] = 1;
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[0] <= 5.4000000954) {
            results[40] = 2;
          }
          else {
            results[40] = 1;
          }
        }
        else {
          results[40] = 2;
        }
      }
    }
    else {
      if (x[2] <= 4.9500000477) {
        if (x[1] <= 2.8500000238) {
          if (x[2] <= 4.7000000477) {
            results[40] = 1;
          }
          else {
            if (x[3] <= 1.6499999762) {
              results[40] = 1;
            }
            else {
              results[40] = 2;
            }
          }
        }
        else {
          results[40] = 1;
        }
      }
      else {
        results[40] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.3500000238) {
      results[41] = 0;
    }
    else {
      results[41] = 1;
    }
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[2] <= 2.6499999762) {
        results[41] = 0;
      }
      else {
        if (x[3] <= 1.6999999881) {
          results[41] = 1;
        }
        else {
          if (x[1] <= 3.1000000238) {
            results[41] = 2;
          }
          else {
            results[41] = 1;
          }
        }
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[1] <= 2.7500000000) {
          results[41] = 2;
        }
        else {
          results[41] = 1;
        }
      }
      else {
        results[41] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[3] <= 0.7000000030) {
      results[42] = 0;
    }
    else {
      if (x[3] <= 1.5500000119) {
        results[42] = 1;
      }
      else {
        results[42] = 2;
      }
    }
  }
  else {
    if (x[0] <= 6.7500000000) {
      if (x[3] <= 1.7500000000) {
        if (x[1] <= 3.5000000000) {
          if (x[2] <= 5.0499999523) {
            results[42] = 1;
          }
          else {
            if (x[0] <= 6.0499999523) {
              results[42] = 1;
            }
            else {
              results[42] = 2;
            }
          }
        }
        else {
          results[42] = 0;
        }
      }
      else {
        if (x[1] <= 3.1000000238) {
          results[42] = 2;
        }
        else {
          if (x[3] <= 1.8999999762) {
            results[42] = 1;
          }
          else {
            results[42] = 2;
          }
        }
      }
    }
    else {
      if (x[2] <= 4.9500000477) {
        results[42] = 1;
      }
      else {
        results[42] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[43] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[3] <= 1.6500000358) {
        results[43] = 1;
      }
      else {
        if (x[2] <= 4.6500000954) {
          results[43] = 2;
        }
        else {
          if (x[1] <= 3.1000000238) {
            results[43] = 2;
          }
          else {
            results[43] = 1;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[1] <= 2.7500000000) {
          results[43] = 1;
        }
        else {
          if (x[2] <= 5.0499999523) {
            results[43] = 1;
          }
          else {
            results[43] = 2;
          }
        }
      }
      else {
        results[43] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[44] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.2999999523) {
        if (x[1] <= 2.2500000000) {
          if (x[3] <= 1.2500000000) {
            results[44] = 1;
          }
          else {
            results[44] = 2;
          }
        }
        else {
          results[44] = 1;
        }
      }
      else {
        results[44] = 2;
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[0] <= 5.9500000477) {
          results[44] = 1;
        }
        else {
          results[44] = 2;
        }
      }
      else {
        results[44] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[1] <= 2.7000000477) {
      if (x[1] <= 2.4500000477) {
        results[45] = 1;
      }
      else {
        results[45] = 2;
      }
    }
    else {
      results[45] = 0;
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[3] <= 0.7000000030) {
        results[45] = 0;
      }
      else {
        if (x[3] <= 1.3499999642) {
          results[45] = 1;
        }
        else {
          if (x[2] <= 4.9500000477) {
            results[45] = 1;
          }
          else {
            if (x[3] <= 1.5500000119) {
              results[45] = 2;
            }
            else {
              results[45] = 1;
            }
          }
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[1] <= 3.1000000238) {
          results[45] = 2;
        }
        else {
          results[45] = 1;
        }
      }
      else {
        results[45] = 2;
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[46] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      results[46] = 1;
    }
    else {
      if (x[0] <= 6.3500001431) {
        if (x[1] <= 3.1000000238) {
          if (x[1] <= 2.6000000238) {
            if (x[2] <= 4.9500000477) {
              results[46] = 1;
            }
            else {
              results[46] = 2;
            }
          }
          else {
            results[46] = 2;
          }
        }
        else {
          if (x[1] <= 3.2500000000) {
            results[46] = 1;
          }
          else {
            results[46] = 2;
          }
        }
      }
      else {
        results[46] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[47] = 0;
  }
  else {
    if (x[0] <= 6.1499998569) {
      if (x[3] <= 1.6500000358) {
        if (x[0] <= 6.0499999523) {
          results[47] = 1;
        }
        else {
          if (x[1] <= 2.6999999285) {
            results[47] = 2;
          }
          else {
            results[47] = 1;
          }
        }
      }
      else {
        results[47] = 2;
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.7500000000) {
          results[47] = 1;
        }
        else {
          results[47] = 2;
        }
      }
      else {
        results[47] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[48] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[3] <= 1.4499999881) {
        results[48] = 1;
      }
      else {
        if (x[1] <= 2.8500000238) {
          if (x[1] <= 2.6499999762) {
            if (x[0] <= 6.1500000954) {
              results[48] = 2;
            }
            else {
              results[48] = 1;
            }
          }
          else {
            if (x[2] <= 4.8499999046) {
              results[48] = 1;
            }
            else {
              results[48] = 2;
            }
          }
        }
        else {
          results[48] = 1;
        }
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[1] <= 3.0000000000) {
          results[48] = 2;
        }
        else {
          results[48] = 1;
        }
      }
      else {
        results[48] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[49] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.6500000358) {
          results[49] = 1;
        }
        else {
          if (x[2] <= 4.7500000000) {
            results[49] = 2;
          }
          else {
            results[49] = 1;
          }
        }
      }
      else {
        if (x[0] <= 6.0499999523) {
          results[49] = 1;
        }
        else {
          results[49] = 2;
        }
      }
    }
    else {
      if (x[0] <= 6.0000000000) {
        if (x[2] <= 4.9000000954) {
          results[49] = 1;
        }
        else {
          results[49] = 2;
        }
      }
      else {
        results[49] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[50] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 7.0499999523) {
        if (x[1] <= 2.2500000000) {
          if (x[3] <= 1.2500000000) {
            results[50] = 1;
          }
          else {
            if (x[2] <= 4.7500000000) {
              results[50] = 1;
            }
            else {
              results[50] = 2;
            }
          }
        }
        else {
          if (x[0] <= 4.9500000477) {
            results[50] = 2;
          }
          else {
            results[50] = 1;
          }
        }
      }
      else {
        results[50] = 2;
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[2] <= 4.8500001431) {
          results[50] = 1;
        }
        else {
          results[50] = 2;
        }
      }
      else {
        results[50] = 2;
      }
    }
  }
  if (x[2] <= 2.3500000238) {
    results[51] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        if (x[2] <= 3.8999999762) {
          results[51] = 1;
        }
        else {
          results[51] = 2;
        }
      }
      else {
        results[51] = 1;
      }
    }
    else {
      if (x[3] <= 1.6999999881) {
        if (x[2] <= 5.3499999046) {
          results[51] = 1;
        }
        else {
          results[51] = 2;
        }
      }
      else {
        results[51] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[52] = 0;
  }
  else {
    if (x[0] <= 7.0000000000) {
      if (x[2] <= 4.7500000000) {
        if (x[0] <= 4.9500000477) {
          results[52] = 2;
        }
        else {
          results[52] = 1;
        }
      }
      else {
        if (x[3] <= 1.7500000000) {
          if (x[0] <= 6.5000000000) {
            if (x[2] <= 4.9500000477) {
              results[52] = 1;
            }
            else {
              results[52] = 2;
            }
          }
          else {
            results[52] = 1;
          }
        }
        else {
          if (x[0] <= 5.9500000477) {
            if (x[2] <= 4.8500001431) {
              results[52] = 1;
            }
            else {
              results[52] = 2;
            }
          }
          else {
            results[52] = 2;
          }
        }
      }
    }
    else {
      results[52] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[53] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[2] <= 4.4500000477) {
        results[53] = 1;
      }
      else {
        if (x[3] <= 1.6500000358) {
          results[53] = 1;
        }
        else {
          results[53] = 2;
        }
      }
    }
    else {
      if (x[0] <= 6.5499999523) {
        results[53] = 2;
      }
      else {
        if (x[0] <= 7.0000000000) {
          if (x[3] <= 1.7500000000) {
            results[53] = 1;
          }
          else {
            results[53] = 2;
          }
        }
        else {
          results[53] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[54] = 0;
  }
  else {
    if (x[3] <= 1.5500000119) {
      if (x[1] <= 2.6499999762) {
        if (x[2] <= 4.7500000000) {
          results[54] = 1;
        }
        else {
          results[54] = 2;
        }
      }
      else {
        if (x[3] <= 1.4499999881) {
          results[54] = 1;
        }
        else {
          if (x[2] <= 4.8999998569) {
            results[54] = 1;
          }
          else {
            results[54] = 2;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.4500000477) {
          if (x[0] <= 5.4500000477) {
            results[54] = 2;
          }
          else {
            results[54] = 1;
          }
        }
        else {
          results[54] = 2;
        }
      }
      else {
        if (x[0] <= 5.9500000477) {
          if (x[1] <= 3.1000000238) {
            results[54] = 2;
          }
          else {
            results[54] = 1;
          }
        }
        else {
          results[54] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[55] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[1] <= 2.5499999523) {
        if (x[3] <= 1.5000000000) {
          results[55] = 1;
        }
        else {
          results[55] = 2;
        }
      }
      else {
        results[55] = 1;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.0499999523) {
          results[55] = 1;
        }
        else {
          results[55] = 2;
        }
      }
      else {
        results[55] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[56] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 4.9500000477) {
        if (x[3] <= 1.6500000358) {
          results[56] = 1;
        }
        else {
          results[56] = 2;
        }
      }
      else {
        if (x[3] <= 1.6500000358) {
          results[56] = 2;
        }
        else {
          results[56] = 1;
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        results[56] = 1;
      }
      else {
        results[56] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[57] = 0;
  }
  else {
    if (x[3] <= 1.6999999881) {
      if (x[2] <= 5.4500000477) {
        if (x[2] <= 5.0000000000) {
          results[57] = 1;
        }
        else {
          if (x[3] <= 1.5500000119) {
            results[57] = 2;
          }
          else {
            results[57] = 1;
          }
        }
      }
      else {
        results[57] = 2;
      }
    }
    else {
      results[57] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[58] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        results[58] = 1;
      }
      else {
        results[58] = 2;
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[0] <= 5.8500001431) {
          results[58] = 2;
        }
        else {
          results[58] = 1;
        }
      }
      else {
        results[58] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[59] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[1] <= 2.2500000000) {
        if (x[2] <= 4.5000000000) {
          results[59] = 1;
        }
        else {
          results[59] = 2;
        }
      }
      else {
        if (x[3] <= 1.6500000358) {
          results[59] = 1;
        }
        else {
          if (x[1] <= 2.7500000000) {
            results[59] = 2;
          }
          else {
            results[59] = 1;
          }
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[1] <= 3.0000000000) {
          results[59] = 2;
        }
        else {
          results[59] = 1;
        }
      }
      else {
        results[59] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[60] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 7.0999999046) {
        results[60] = 1;
      }
      else {
        results[60] = 2;
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[1] <= 3.1000000238) {
          results[60] = 2;
        }
        else {
          results[60] = 1;
        }
      }
      else {
        results[60] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[61] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        if (x[3] <= 1.3500000238) {
          results[61] = 1;
        }
        else {
          results[61] = 2;
        }
      }
      else {
        results[61] = 1;
      }
    }
    else {
      if (x[2] <= 4.9500000477) {
        if (x[1] <= 3.1000000238) {
          if (x[1] <= 2.6499999762) {
            results[61] = 1;
          }
          else {
            results[61] = 2;
          }
        }
        else {
          results[61] = 1;
        }
      }
      else {
        if (x[3] <= 1.7500000000) {
          if (x[2] <= 5.3499999046) {
            if (x[3] <= 1.5500000119) {
              results[61] = 2;
            }
            else {
              results[61] = 1;
            }
          }
          else {
            results[61] = 2;
          }
        }
        else {
          results[61] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[62] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[2] <= 4.4500000477) {
        results[62] = 1;
      }
      else {
        if (x[3] <= 1.6500000358) {
          results[62] = 1;
        }
        else {
          results[62] = 2;
        }
      }
    }
    else {
      if (x[1] <= 2.5499999523) {
        if (x[2] <= 4.9500000477) {
          results[62] = 1;
        }
        else {
          results[62] = 2;
        }
      }
      else {
        if (x[3] <= 1.7500000000) {
          if (x[3] <= 1.4499999881) {
            results[62] = 2;
          }
          else {
            results[62] = 1;
          }
        }
        else {
          results[62] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[63] = 0;
  }
  else {
    if (x[0] <= 5.8500001431) {
      if (x[2] <= 4.7000000477) {
        if (x[0] <= 4.9500000477) {
          results[63] = 2;
        }
        else {
          results[63] = 1;
        }
      }
      else {
        results[63] = 2;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.3499999046) {
          results[63] = 1;
        }
        else {
          results[63] = 2;
        }
      }
      else {
        results[63] = 2;
      }
    }
  }
  if (x[2] <= 2.3500000238) {
    results[64] = 0;
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[2] <= 4.7500000000) {
        results[64] = 1;
      }
      else {
        if (x[3] <= 1.8999999762) {
          if (x[0] <= 5.9500000477) {
            results[64] = 1;
          }
          else {
            if (x[0] <= 6.5000000000) {
              results[64] = 2;
            }
            else {
              results[64] = 1;
            }
          }
        }
        else {
          results[64] = 2;
        }
      }
    }
    else {
      results[64] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[65] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 7.0999999046) {
        if (x[1] <= 2.2500000000) {
          if (x[2] <= 4.7500000000) {
            results[65] = 1;
          }
          else {
            results[65] = 2;
          }
        }
        else {
          if (x[2] <= 5.0499999523) {
            if (x[3] <= 1.6500000358) {
              results[65] = 1;
            }
            else {
              if (x[1] <= 2.7500000000) {
                results[65] = 2;
              }
              else {
                results[65] = 1;
              }
            }
          }
          else {
            if (x[1] <= 2.7500000000) {
              results[65] = 1;
            }
            else {
              results[65] = 2;
            }
          }
        }
      }
      else {
        results[65] = 2;
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        results[65] = 1;
      }
      else {
        results[65] = 2;
      }
    }
  }
  if (x[3] <= 0.7000000030) {
    results[66] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.6500000358) {
          results[66] = 1;
        }
        else {
          if (x[0] <= 5.7999999523) {
            results[66] = 2;
          }
          else {
            results[66] = 1;
          }
        }
      }
      else {
        if (x[0] <= 6.1500000954) {
          results[66] = 1;
        }
        else {
          results[66] = 2;
        }
      }
    }
    else {
      if (x[1] <= 3.1499999762) {
        results[66] = 2;
      }
      else {
        if (x[2] <= 4.9500000477) {
          results[66] = 1;
        }
        else {
          results[66] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[67] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        if (x[3] <= 1.6500000358) {
          results[67] = 1;
        }
        else {
          if (x[0] <= 5.7999999523) {
            results[67] = 2;
          }
          else {
            results[67] = 1;
          }
        }
      }
      else {
        if (x[0] <= 6.0499999523) {
          results[67] = 1;
        }
        else {
          results[67] = 2;
        }
      }
    }
    else {
      if (x[0] <= 5.9500000477) {
        if (x[0] <= 5.8500001431) {
          results[67] = 2;
        }
        else {
          results[67] = 1;
        }
      }
      else {
        results[67] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[68] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[3] <= 1.6999999881) {
        results[68] = 1;
      }
      else {
        if (x[0] <= 6.0499999523) {
          results[68] = 1;
        }
        else {
          results[68] = 2;
        }
      }
    }
    else {
      if (x[1] <= 2.5499999523) {
        if (x[1] <= 2.3500000238) {
          results[68] = 2;
        }
        else {
          if (x[3] <= 1.6499999762) {
            results[68] = 1;
          }
          else {
            results[68] = 2;
          }
        }
      }
      else {
        if (x[3] <= 1.6999999881) {
          if (x[0] <= 7.0499999523) {
            if (x[1] <= 2.7500000000) {
              results[68] = 1;
            }
            else {
              if (x[0] <= 6.6000001431) {
                results[68] = 2;
              }
              else {
                results[68] = 1;
              }
            }
          }
          else {
            results[68] = 2;
          }
        }
        else {
          results[68] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[69] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[3] <= 1.3499999642) {
        results[69] = 1;
      }
      else {
        if (x[1] <= 2.8500000238) {
          if (x[3] <= 1.5500000119) {
            if (x[2] <= 5.0000000000) {
              results[69] = 1;
            }
            else {
              results[69] = 2;
            }
          }
          else {
            results[69] = 1;
          }
        }
        else {
          results[69] = 1;
        }
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[1] <= 3.1000000238) {
          results[69] = 2;
        }
        else {
          if (x[2] <= 5.4000000954) {
            results[69] = 1;
          }
          else {
            results[69] = 2;
          }
        }
      }
      else {
        results[69] = 2;
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[70] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      results[70] = 1;
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 4.9500000477) {
          results[70] = 1;
        }
        else {
          if (x[1] <= 2.8999999762) {
            results[70] = 2;
          }
          else {
            if (x[2] <= 5.4000000954) {
              results[70] = 1;
            }
            else {
              results[70] = 2;
            }
          }
        }
      }
      else {
        results[70] = 2;
      }
    }
  }
  if (x[3] <= 1.7500000000) {
    if (x[3] <= 0.7500000000) {
      results[71] = 0;
    }
    else {
      if (x[2] <= 5.3499999046) {
        if (x[3] <= 1.6500000358) {
          if (x[0] <= 6.2500000000) {
            results[71] = 1;
          }
          else {
            if (x[2] <= 5.0000000000) {
              results[71] = 1;
            }
            else {
              results[71] = 2;
            }
          }
        }
        else {
          if (x[2] <= 4.7500000000) {
            results[71] = 2;
          }
          else {
            results[71] = 1;
          }
        }
      }
      else {
        results[71] = 2;
      }
    }
  }
  else {
    results[71] = 2;
  }
  if (x[2] <= 2.3500000238) {
    results[72] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        if (x[2] <= 3.8999999762) {
          results[72] = 1;
        }
        else {
          results[72] = 2;
        }
      }
      else {
        results[72] = 1;
      }
    }
    else {
      if (x[3] <= 1.5500000119) {
        if (x[0] <= 6.2000000477) {
          results[72] = 2;
        }
        else {
          if (x[0] <= 6.6000001431) {
            if (x[2] <= 5.0000000000) {
              results[72] = 1;
            }
            else {
              results[72] = 2;
            }
          }
          else {
            results[72] = 1;
          }
        }
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[1] <= 3.1000000238) {
            results[72] = 2;
          }
          else {
            results[72] = 1;
          }
        }
        else {
          results[72] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[73] = 0;
  }
  else {
    if (x[0] <= 6.1499998569) {
      if (x[3] <= 1.4499999881) {
        results[73] = 1;
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[0] <= 5.1500000954) {
            results[73] = 2;
          }
          else {
            results[73] = 1;
          }
        }
        else {
          results[73] = 2;
        }
      }
    }
    else {
      if (x[2] <= 5.0499999523) {
        if (x[0] <= 6.2500000000) {
          results[73] = 2;
        }
        else {
          results[73] = 1;
        }
      }
      else {
        results[73] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[74] = 0;
  }
  else {
    if (x[0] <= 6.6499998569) {
      if (x[2] <= 4.7500000000) {
        if (x[3] <= 1.6500000358) {
          results[74] = 1;
        }
        else {
          results[74] = 2;
        }
      }
      else {
        if (x[3] <= 1.6999999881) {
          if (x[3] <= 1.5500000119) {
            results[74] = 2;
          }
          else {
            results[74] = 1;
          }
        }
        else {
          results[74] = 2;
        }
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        results[74] = 1;
      }
      else {
        results[74] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[75] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      results[75] = 1;
    }
    else {
      if (x[3] <= 1.5500000119) {
        if (x[2] <= 5.0000000000) {
          results[75] = 1;
        }
        else {
          results[75] = 2;
        }
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[0] <= 6.0499999523) {
            results[75] = 1;
          }
          else {
            results[75] = 2;
          }
        }
        else {
          results[75] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[76] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[0] <= 7.0499999523) {
        if (x[2] <= 4.9500000477) {
          results[76] = 1;
        }
        else {
          if (x[1] <= 2.7500000000) {
            if (x[2] <= 5.0499999523) {
              results[76] = 2;
            }
            else {
              results[76] = 1;
            }
          }
          else {
            results[76] = 2;
          }
        }
      }
      else {
        results[76] = 2;
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[0] <= 6.0499999523) {
          if (x[1] <= 3.1000000238) {
            results[76] = 2;
          }
          else {
            results[76] = 1;
          }
        }
        else {
          results[76] = 2;
        }
      }
      else {
        results[76] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.3500000238) {
      results[77] = 0;
    }
    else {
      if (x[3] <= 1.6000000238) {
        results[77] = 1;
      }
      else {
        results[77] = 2;
      }
    }
  }
  else {
    if (x[0] <= 6.3500001431) {
      if (x[1] <= 3.6000000238) {
        if (x[2] <= 4.7000000477) {
          results[77] = 1;
        }
        else {
          if (x[3] <= 1.6999999881) {
            if (x[2] <= 4.9500000477) {
              results[77] = 1;
            }
            else {
              if (x[3] <= 1.5500000119) {
                results[77] = 2;
              }
              else {
                results[77] = 1;
              }
            }
          }
          else {
            if (x[2] <= 4.8500001431) {
              if (x[0] <= 5.9500000477) {
                results[77] = 1;
              }
              else {
                results[77] = 2;
              }
            }
            else {
              results[77] = 2;
            }
          }
        }
      }
      else {
        results[77] = 0;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[0] <= 7.0999999046) {
          results[77] = 1;
        }
        else {
          results[77] = 2;
        }
      }
      else {
        results[77] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[78] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        if (x[3] <= 1.3500000238) {
          results[78] = 1;
        }
        else {
          results[78] = 2;
        }
      }
      else {
        results[78] = 1;
      }
    }
    else {
      if (x[2] <= 5.1499998569) {
        if (x[3] <= 1.6999999881) {
          if (x[1] <= 2.3500000238) {
            results[78] = 2;
          }
          else {
            if (x[2] <= 5.0000000000) {
              results[78] = 1;
            }
            else {
              if (x[1] <= 2.7500000000) {
                results[78] = 1;
              }
              else {
                results[78] = 2;
              }
            }
          }
        }
        else {
          results[78] = 2;
        }
      }
      else {
        results[78] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[79] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 4.9500000477) {
        if (x[1] <= 2.5499999523) {
          if (x[3] <= 1.6000000238) {
            results[79] = 1;
          }
          else {
            results[79] = 2;
          }
        }
        else {
          results[79] = 1;
        }
      }
      else {
        if (x[1] <= 2.6499999762) {
          results[79] = 2;
        }
        else {
          if (x[1] <= 2.7500000000) {
            results[79] = 1;
          }
          else {
            if (x[2] <= 5.0499999523) {
              results[79] = 1;
            }
            else {
              results[79] = 2;
            }
          }
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[0] <= 6.0499999523) {
          results[79] = 1;
        }
        else {
          results[79] = 2;
        }
      }
      else {
        results[79] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[1] <= 2.6500000954) {
      if (x[1] <= 2.3500000238) {
        results[80] = 0;
      }
      else {
        results[80] = 1;
      }
    }
    else {
      results[80] = 0;
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[1] <= 3.4500000477) {
        if (x[2] <= 4.9500000477) {
          results[80] = 1;
        }
        else {
          if (x[1] <= 2.6000000238) {
            results[80] = 2;
          }
          else {
            results[80] = 1;
          }
        }
      }
      else {
        results[80] = 0;
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[0] <= 5.9500000477) {
          if (x[2] <= 4.9500000477) {
            results[80] = 1;
          }
          else {
            results[80] = 2;
          }
        }
        else {
          results[80] = 2;
        }
      }
      else {
        results[80] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[81] = 0;
  }
  else {
    if (x[3] <= 1.5500000119) {
      if (x[3] <= 1.3499999642) {
        results[81] = 1;
      }
      else {
        if (x[0] <= 6.1499998569) {
          if (x[2] <= 4.7500000000) {
            results[81] = 1;
          }
          else {
            results[81] = 2;
          }
        }
        else {
          results[81] = 1;
        }
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[2] <= 5.2500000000) {
          if (x[2] <= 4.9500000477) {
            if (x[0] <= 5.9500000477) {
              if (x[0] <= 5.4000000954) {
                results[81] = 2;
              }
              else {
                results[81] = 1;
              }
            }
            else {
              results[81] = 2;
            }
          }
          else {
            results[81] = 1;
          }
        }
        else {
          results[81] = 2;
        }
      }
      else {
        results[81] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[82] = 0;
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[2] <= 4.7500000000) {
        if (x[3] <= 1.6500000358) {
          results[82] = 1;
        }
        else {
          results[82] = 2;
        }
      }
      else {
        if (x[3] <= 1.6499999762) {
          results[82] = 1;
        }
        else {
          if (x[0] <= 6.0000000000) {
            results[82] = 1;
          }
          else {
            results[82] = 2;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[1] <= 2.8999999762) {
          results[82] = 2;
        }
        else {
          if (x[3] <= 1.6500000358) {
            results[82] = 2;
          }
          else {
            results[82] = 1;
          }
        }
      }
      else {
        results[82] = 2;
      }
    }
  }
  if (x[2] <= 2.6999999881) {
    results[83] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.3499999046) {
        if (x[1] <= 2.5499999523) {
          if (x[2] <= 4.9500000477) {
            if (x[0] <= 4.9500000477) {
              results[83] = 2;
            }
            else {
              results[83] = 1;
            }
          }
          else {
            results[83] = 2;
          }
        }
        else {
          results[83] = 1;
        }
      }
      else {
        results[83] = 2;
      }
    }
    else {
      if (x[0] <= 6.0000000000) {
        if (x[2] <= 4.8500001431) {
          results[83] = 1;
        }
        else {
          results[83] = 2;
        }
      }
      else {
        results[83] = 2;
      }
    }
  }
  if (x[0] <= 5.5499999523) {
    if (x[1] <= 2.7500000000) {
      if (x[2] <= 2.1499999762) {
        results[84] = 0;
      }
      else {
        if (x[3] <= 1.4500000477) {
          results[84] = 1;
        }
        else {
          results[84] = 2;
        }
      }
    }
    else {
      results[84] = 0;
    }
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[1] <= 3.7000000477) {
        if (x[2] <= 4.7500000000) {
          results[84] = 1;
        }
        else {
          if (x[0] <= 5.9500000477) {
            results[84] = 1;
          }
          else {
            if (x[3] <= 1.5999999642) {
              results[84] = 1;
            }
            else {
              results[84] = 2;
            }
          }
        }
      }
      else {
        results[84] = 0;
      }
    }
    else {
      if (x[3] <= 1.5500000119) {
        if (x[1] <= 2.9499999285) {
          results[84] = 2;
        }
        else {
          results[84] = 1;
        }
      }
      else {
        results[84] = 2;
      }
    }
  }
  if (x[2] <= 2.6000000238) {
    results[85] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[0] <= 4.9500000477) {
        results[85] = 2;
      }
      else {
        results[85] = 1;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[0] <= 7.0499999523) {
          results[85] = 1;
        }
        else {
          results[85] = 2;
        }
      }
      else {
        results[85] = 2;
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[86] = 0;
  }
  else {
    if (x[2] <= 4.9500000477) {
      if (x[1] <= 2.8500000238) {
        if (x[2] <= 4.8500001431) {
          results[86] = 1;
        }
        else {
          if (x[3] <= 1.6499999762) {
            results[86] = 1;
          }
          else {
            results[86] = 2;
          }
        }
      }
      else {
        results[86] = 1;
      }
    }
    else {
      results[86] = 2;
    }
  }
  if (x[3] <= 0.7500000000) {
    results[87] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        results[87] = 2;
      }
      else {
        results[87] = 1;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[0] <= 6.2000000477) {
          results[87] = 2;
        }
        else {
          if (x[0] <= 6.5000000000) {
            if (x[1] <= 2.6499999762) {
              results[87] = 1;
            }
            else {
              results[87] = 2;
            }
          }
          else {
            results[87] = 1;
          }
        }
      }
      else {
        if (x[2] <= 4.8500001431) {
          if (x[1] <= 3.1000000238) {
            results[87] = 2;
          }
          else {
            results[87] = 1;
          }
        }
        else {
          results[87] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.7500000000) {
    results[88] = 0;
  }
  else {
    if (x[0] <= 6.4500000477) {
      if (x[3] <= 1.6999999881) {
        if (x[1] <= 2.2500000000) {
          if (x[2] <= 4.7500000000) {
            results[88] = 1;
          }
          else {
            results[88] = 2;
          }
        }
        else {
          if (x[0] <= 6.0499999523) {
            results[88] = 1;
          }
          else {
            if (x[1] <= 2.8500000238) {
              if (x[2] <= 5.0000000000) {
                results[88] = 1;
              }
              else {
                results[88] = 2;
              }
            }
            else {
              results[88] = 1;
            }
          }
        }
      }
      else {
        if (x[3] <= 1.8499999642) {
          if (x[2] <= 4.8500001431) {
            if (x[0] <= 5.9500000477) {
              results[88] = 1;
            }
            else {
              results[88] = 2;
            }
          }
          else {
            results[88] = 2;
          }
        }
        else {
          results[88] = 2;
        }
      }
    }
    else {
      if (x[3] <= 1.5000000000) {
        results[88] = 1;
      }
      else {
        results[88] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[1] <= 2.7000000477) {
      if (x[3] <= 1.4000000358) {
        results[89] = 1;
      }
      else {
        results[89] = 2;
      }
    }
    else {
      if (x[2] <= 3.1000000238) {
        results[89] = 0;
      }
      else {
        results[89] = 1;
      }
    }
  }
  else {
    if (x[0] <= 6.1499998569) {
      if (x[3] <= 1.8499999642) {
        if (x[3] <= 0.6000000015) {
          results[89] = 0;
        }
        else {
          if (x[3] <= 1.3499999642) {
            results[89] = 1;
          }
          else {
            if (x[1] <= 2.6499999762) {
              results[89] = 2;
            }
            else {
              if (x[3] <= 1.6999999881) {
                results[89] = 1;
              }
              else {
                if (x[2] <= 4.8500001431) {
                  results[89] = 1;
                }
                else {
                  results[89] = 2;
                }
              }
            }
          }
        }
      }
      else {
        results[89] = 2;
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[2] <= 5.4000000954) {
          results[89] = 1;
        }
        else {
          results[89] = 2;
        }
      }
      else {
        results[89] = 2;
      }
    }
  }
  if (x[3] <= 1.6999999881) {
    if (x[2] <= 2.3500000238) {
      results[90] = 0;
    }
    else {
      if (x[3] <= 1.5500000119) {
        results[90] = 1;
      }
      else {
        if (x[0] <= 6.7500000000) {
          results[90] = 1;
        }
        else {
          results[90] = 2;
        }
      }
    }
  }
  else {
    if (x[0] <= 5.9500000477) {
      if (x[1] <= 3.1000000238) {
        results[90] = 2;
      }
      else {
        results[90] = 1;
      }
    }
    else {
      results[90] = 2;
    }
  }
  if (x[3] <= 0.8000000119) {
    results[91] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[0] <= 4.9500000477) {
        results[91] = 2;
      }
      else {
        if (x[3] <= 1.4499999881) {
          results[91] = 1;
        }
        else {
          if (x[2] <= 5.0499999523) {
            results[91] = 1;
          }
          else {
            results[91] = 2;
          }
        }
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[0] <= 5.9500000477) {
          results[91] = 1;
        }
        else {
          results[91] = 2;
        }
      }
      else {
        results[91] = 2;
      }
    }
  }
  if (x[2] <= 2.3500000238) {
    results[92] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[2] <= 4.7500000000) {
        results[92] = 1;
      }
      else {
        if (x[0] <= 6.5000000000) {
          if (x[0] <= 5.9500000477) {
            results[92] = 1;
          }
          else {
            results[92] = 2;
          }
        }
        else {
          results[92] = 1;
        }
      }
    }
    else {
      if (x[1] <= 2.5499999523) {
        if (x[0] <= 6.5000000000) {
          results[92] = 1;
        }
        else {
          results[92] = 2;
        }
      }
      else {
        if (x[3] <= 1.7500000000) {
          if (x[2] <= 5.0499999523) {
            results[92] = 1;
          }
          else {
            if (x[0] <= 6.0499999523) {
              results[92] = 1;
            }
            else {
              results[92] = 2;
            }
          }
        }
        else {
          results[92] = 2;
        }
      }
    }
  }
  if (x[2] <= 2.4499999881) {
    results[93] = 0;
  }
  else {
    if (x[2] <= 4.8500001431) {
      if (x[2] <= 4.7500000000) {
        if (x[0] <= 5.0000000000) {
          if (x[3] <= 1.3500000238) {
            results[93] = 1;
          }
          else {
            results[93] = 2;
          }
        }
        else {
          results[93] = 1;
        }
      }
      else {
        if (x[3] <= 1.5999999642) {
          results[93] = 1;
        }
        else {
          if (x[1] <= 3.0000000000) {
            results[93] = 2;
          }
          else {
            results[93] = 1;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.6999999881) {
        if (x[2] <= 5.0000000000) {
          results[93] = 1;
        }
        else {
          if (x[0] <= 6.1500000954) {
            results[93] = 1;
          }
          else {
            results[93] = 2;
          }
        }
      }
      else {
        results[93] = 2;
      }
    }
  }
  if (x[2] <= 2.5999999642) {
    results[94] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[3] <= 1.3499999642) {
        results[94] = 1;
      }
      else {
        if (x[2] <= 4.9500000477) {
          results[94] = 1;
        }
        else {
          if (x[3] <= 1.5500000119) {
            results[94] = 2;
          }
          else {
            results[94] = 1;
          }
        }
      }
    }
    else {
      if (x[3] <= 1.7500000000) {
        if (x[0] <= 5.7999999523) {
          results[94] = 2;
        }
        else {
          results[94] = 1;
        }
      }
      else {
        if (x[2] <= 4.8500001431) {
          results[94] = 1;
        }
        else {
          results[94] = 2;
        }
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[95] = 0;
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[2] <= 5.0499999523) {
        results[95] = 1;
      }
      else {
        results[95] = 2;
      }
    }
    else {
      if (x[0] <= 6.0000000000) {
        if (x[1] <= 3.0000000000) {
          results[95] = 2;
        }
        else {
          results[95] = 1;
        }
      }
      else {
        results[95] = 2;
      }
    }
  }
  if (x[0] <= 5.4500000477) {
    if (x[2] <= 2.3500000238) {
      results[96] = 0;
    }
    else {
      results[96] = 1;
    }
  }
  else {
    if (x[3] <= 1.7500000000) {
      if (x[1] <= 3.3500000238) {
        if (x[1] <= 2.2500000000) {
          if (x[2] <= 4.7500000000) {
            results[96] = 1;
          }
          else {
            results[96] = 2;
          }
        }
        else {
          if (x[3] <= 1.3499999642) {
            results[96] = 1;
          }
          else {
            if (x[2] <= 5.0499999523) {
              results[96] = 1;
            }
            else {
              if (x[3] <= 1.5500000119) {
                results[96] = 2;
              }
              else {
                results[96] = 1;
              }
            }
          }
        }
      }
      else {
        results[96] = 0;
      }
    }
    else {
      if (x[3] <= 1.8499999642) {
        if (x[2] <= 4.8500001431) {
          if (x[1] <= 3.1000000238) {
            results[96] = 2;
          }
          else {
            results[96] = 1;
          }
        }
        else {
          results[96] = 2;
        }
      }
      else {
        results[96] = 2;
      }
    }
  }
  if (x[3] <= 0.7000000030) {
    results[97] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[0] <= 7.0999999046) {
        if (x[2] <= 4.9500000477) {
          results[97] = 1;
        }
        else {
          if (x[3] <= 1.5500000119) {
            results[97] = 2;
          }
          else {
            results[97] = 1;
          }
        }
      }
      else {
        results[97] = 2;
      }
    }
    else {
      if (x[2] <= 4.8500001431) {
        if (x[2] <= 4.6500000954) {
          results[97] = 2;
        }
        else {
          if (x[0] <= 5.9500000477) {
            results[97] = 1;
          }
          else {
            results[97] = 2;
          }
        }
      }
      else {
        results[97] = 2;
      }
    }
  }
  if (x[3] <= 0.8000000119) {
    results[98] = 0;
  }
  else {
    if (x[3] <= 1.6500000358) {
      if (x[3] <= 1.3499999642) {
        results[98] = 1;
      }
      else {
        if (x[1] <= 2.6499999762) {
          if (x[0] <= 6.1499998569) {
            results[98] = 2;
          }
          else {
            results[98] = 1;
          }
        }
        else {
          if (x[0] <= 7.0499999523) {
            if (x[2] <= 5.0000000000) {
              results[98] = 1;
            }
            else {
              if (x[3] <= 1.5500000119) {
                results[98] = 2;
              }
              else {
                results[98] = 1;
              }
            }
          }
          else {
            results[98] = 2;
          }
        }
      }
    }
    else {
      results[98] = 2;
    }
  }
  if (x[2] <= 2.4499999881) {
    results[99] = 0;
  }
  else {
    if (x[2] <= 4.7500000000) {
      if (x[0] <= 4.9500000477) {
        results[99] = 2;
      }
      else {
        results[99] = 1;
      }
    }
    else {
      if (x[3] <= 1.6999999881) {
        if (x[1] <= 3.0499999523) {
          if (x[2] <= 4.9500000477) {
            results[99] = 1;
          }
          else {
            if (x[3] <= 1.5500000119) {
              results[99] = 2;
            }
            else {
              if (x[0] <= 6.5999999046) {
                results[99] = 1;
              }
              else {
                results[99] = 2;
              }
            }
          }
        }
        else {
          results[99] = 1;
        }
      }
      else {
        results[99] = 2;
      }
    }
  }
  int classes_amount = 0;
  for(int i=0; i<100; i++){
  	if(results[i]+1 > classes_amount) classes_amount = results[i]+1;  }
  int result_class = -1;
  int max_apperance = 0;
  for(int i=0; i<classes_amount; i++){
   int apperance = 0;
  	for(int j=0; j<100; j++) if(results[j] == i) apperance++;
  	if(apperance > max_apperance){
  		max_apperance = apperance;
  		result_class = i;
  	}
  }
  return result_class;
}
