//
//  BUKSocialData.h
//  BUKSocialKit
//
//  Created by Lazy on 1/14/16.
//  Copyright © 2016 Lazy. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, BUKSocialShareType){
    BUKSocialShareTypeNone = 0,
    BUKSocialShareTypeWeibo,
    BUKSocialShareTypeWechatFriend,
    BUKSocialShareTypeWechatTimeline,
    BUKSocialShareTypeQQ,
    BUKSocialShareTypeQQZone
};

@interface BUKSocialData : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *content;
@property (nonatomic, copy) NSString *url;
@property (nonatomic, strong) UIImage *image;
@property (nonatomic, copy) NSData *imageData;

- (instancetype)initWithTitle:(NSString *)title content:(NSString *)content url:(NSString *)url image:(UIImage *)image NS_DESIGNATED_INITIALIZER;
+ (instancetype)dataWithTitle:(NSString *)title content:(NSString *)content url:(NSString *)url image:(UIImage *)image;

@end
