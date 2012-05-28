//
//  RaisedCenterButton.h
//  RaisedCenterButton
//
//  Created by Johnnie Pittman on 5/13/12.
//  Copyright (c) 2012 Group 6. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RaisedCenterButton : UIButton

@property (copy, nonatomic) UIImage *buttonImage;

+ (id)buttonWithImage:(UIImage *)image forTabBarController:(UITabBarController *)tabBarController;

@end
