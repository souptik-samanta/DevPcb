---
title: "Infrared Gun"
author: "Souptik Samanta"
description: "A custom-made device to measure temperature with an embedded MCU"
created_at: "2025-06-15"
---
###
# TOTAL TIME TAKEN: 25Hrs
###
## Day - 1 (3 hrs)  
I read about STM32s and found out the Blue Pill (STM32F103C8) was best for me.  
Started checking its datasheet and listing required components.

## Day - 2 (2.5 hrs)  
Checked out various dev PCBs, collected data lol, and laid out components on the schematic... not finished duh.  
**Pic of the day**  
![SCHM DAY 2](./img/image.png)

## Day - 3 (4 hrs)  
Finished making the schematic.  
Put in the correct capacitor values from the datasheet (also followed a sketchy schematic from Taobao).  
Will double-check everything before ordering dw...  
According to the datasheet, the capacitor value was 20pF, but I think that’s wrong — will verify later.  
![Schm day 3](./img/image.png)

## Day - 4 / P1 (1.2 hrs)  
Drew shapes for component placement and the overall PCB outline.  
Sketched the 2D layout of the temperature gun.  
Also planning to add a clock/timer on the dock with a USB-C port and a microcontroller (preferably with Wi-Fi — not a must though lol).  
![Day 4/P1](./img/image-1.png)

## Day - 4 / P2 (1 hr)  
Here’s the PCB after layout and placement.  
![Day 4/P2](./img/image-2.png)

## Day - 4 / P3 (4 hrs)  
After long hours of work...  
**FINALLY FINISHED — HECK YEAH!**  
![Day 4/P3](./img/image-9.png)

---

## More Pics  
![More 1](./img/image-3.png)  
![More 2](./img/image-4.png)  
![More 3](./img/image-5.png)  
![More 4](./img/image-6.png)  
![More 5](./img/image-7.png)  
![More 6](./img/image-8.png)

---

## Day - 5 (4 hrs)  
**Case done!**  
![Case](/img/img2/image-1.png)

The brain will go at the back like this:  
![Brain position](./img/img2/image-2.png)

I also made the bottom plate so the battery doesn't wobble and stuff.  
![Bottom plate](./img/img2/image-3.png)

**Sliding mechanism here too!**  
![Sliding mechanism](./img/img2/image-4.png)

**FINAL PIC**  
![Final pic](./img/img2/image-5.png)

---

## Day - 5 (4 hrs, continued)  
The last case wasn’t that good,  
so I spent 4ish hours and came up with this:  
![New Case](./img/img3/image.png)

I took inspo from:  
[Medical Device Enclosure on GrabCAD](https://grabcad.com/library/medical-device-enclosure-made-with-freecad-1)

I’ve also added the files in `./CAD`.  
With this, I mark the end of this project.

## Day - 5 (1 hr)  
Made this animation so people can see it properly:

![Final Animation](./img/img2/animation%20v2.gif)
