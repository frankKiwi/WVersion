//
//  UIButton+Kiwi.h
//  UNShop
//
//  Created by LWW on 2017/12/25.
//  Copyright © 2017年 UN-ING. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^WBTnCallBack)(UIButton *wBTn);

@interface UIButton (Kiwi)
/**
 *  imageView添加事件
 *
 *  @param block 回调
 */
- (void)addClickMethod:(WBTnCallBack)block;

@end
