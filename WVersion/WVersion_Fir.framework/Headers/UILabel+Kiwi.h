//
//  UILabel+Kiwi.h
//  LWW
//
//  Created by LWW on 2017/7/19.
//  Copyright © 2017年 LWW. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CallBack) (UILabel *wLabel);

@interface UILabel (Kiwi)

/*

  添加事件

 */

- (void)addCallBack:(CallBack)block;

// 提现金额设置
- (UILabel *)WSetMutibleColorWith:(NSString *)sourceLa;

// 支付金额设置
- (UILabel *)WSetMutibleColorWithPay:(NSString *)sourceLa;

@end
