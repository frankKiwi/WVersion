//
//  UITabBarItem+Kiwi.h
//  wKiwi
//
//  Created by LWW on 2017/8/1.
//  Copyright © 2017年 LWW. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CallBack) (UITabBar *wBarItem);

@interface UITabBar (Kiwi)

/*
 
 添加事件
 
 */

- (void)addCallBack:(CallBack)block;

@end
