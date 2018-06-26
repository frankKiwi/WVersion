//
//  UITableView+Header.h
//  DMBee
//
//  Created by LWW on 2017/12/7.
//  Copyright © 2017年 UN-ING. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TableViewAnimationKit.h"

@interface UITableView (Header)
- (void)setHeader;
- (BOOL)TableViewisIOS11;
- (void)SetHight;

- (void)dx_hideTableEmptyDataSeparatorLine;
- (void)dx_scrollToTop;
- (void)starAnimationWith:(XSTableViewAnimationType)animationType TableView:(UITableView *)tableView ;
@end
