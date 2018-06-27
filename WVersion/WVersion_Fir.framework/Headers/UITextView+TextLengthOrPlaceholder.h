//
//  UITextView+TextLengthOrPlaceholder.h
//  DMBee
//
//  Created by UN-ING on 2017/7/8.
//  Copyright © 2017年 UN-ING. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSInteger  const kLimit_Length_key;

@interface UITextView (TextLengthOrPlaceholder)



/*  ！！！！！！！ 特殊说明。如果你想对textView.text直接赋值  ！！！！！！！！
 *       请务必在对textView.placehoulder和textView.limitLength之前进行
 也就是说，一旦你对text赋值了，你需要立马重新对placeholder赋值。
 *       格式：      textView.text = @"请务必写在placeholder和limitLength之前";
 *                  textView.placeholder = @"喜欢请Star";
 *                  textView.limitLength = @20;//如果赋值长度大于此长度会被自动截断！
 */
@property (nonatomic,strong) NSString *placeholder;//占位符
@property (copy, nonatomic) NSNumber *limitLength;//限制字数

@end
