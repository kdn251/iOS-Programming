//
//  AddRecordViewController.h
//  iOS Programming Assignment 2
//
//  Created by Kevin Naughton Jr. on 10/16/16.
//  Copyright © 2016 nyu.edu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Item.h"

@interface AddRecordViewController : UIViewController

//declare attributse
@property (strong, nonatomic)   Item *item;
@property (strong, nonatomic) NSMutableArray *addRecordArray;


@end
