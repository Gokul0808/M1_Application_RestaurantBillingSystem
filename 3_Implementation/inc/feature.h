/**
 * @file feature.h
 * @author Gokul0808
 * @brief 
 * @version 0.1
 * @date 2021-11-23
 * 
 * @copyright Copyright (c) 2021
 * 
 */
 
#ifndef HEADER_H_
#define HEADER_H_

int again;
int total=0;
float gst,cgst,sgst;
int bfrate[7][2]={  {0,30},
                    {1,35},
                    {2,40},
                    {3,20},
                    {4,15},
                    {5,20},
                    {6,30}
                };
int lunchrate[7][2]={{0,80},
                {1,120},
                {2,20},
                {3,120},
                {4,150},
                {5,160},
                {6,30}};
int dinner_rate[7][2]={{0,65},
                {1,50},
                {2,70},
                {3,80},
                {4,65},
                {5,110},
                {6,50}};
int purchased[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };
int temp[][3]={{0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0},
                        {0,0}
                        };

#define MACRO -99
#endif
