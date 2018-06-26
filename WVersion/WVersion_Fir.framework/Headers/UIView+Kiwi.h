//
//  UIView+Kiwi.h
//  Kiwi
//
//  Created by LWW on 2017/7/21.
//  Copyright © 2017年 LWW. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^W_CallBack) (UIView *wView);

@interface UIView (Kiwi)

/*

 添加事件

 */

- (void)addCallBack:(W_CallBack)block;

@end
