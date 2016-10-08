//
//  UIAlertView+Response.h
//  UIAlert+Response
//
//  Created by LiliEhuu on 16/9/23.
//  Copyright © 2016年 LiliEhuu. All rights reserved.
//

#import <UIKit/UIKit.h>

#define UIAlert(msg)    [UIAlertView alert:msg]

typedef void (^ResponseUsingBlock )(__weak UIAlertView *alert, NSUInteger index);

@interface UIAlertView (Response)

/**
 *  @author Lili, 16-09-23 16:09:58
 *
 *  显示一个简易alert,只有一个确定按钮，没有代理不能响应按钮事件
 *
 *  @param msg      显示的消息
 *
 *  @return 返回alert视图
 */
+ (instancetype)alert:(NSString *)msg;

/**
 *  @author Lili, 16-09-23 16:09:09
 *
 *  显示alert并处理回调操作
 *
 *  @param responseBlock 点击按钮回调的Block
 */
- (void)showAlertCompleteHandler:(ResponseUsingBlock)responseBlock;

/**
 *  @author Lili, 16-09-23 16:09:56
 *
 *  清理回调处理
 */
- (void)clearHandler;

@end
