//
//  CADisplayLineImage.h
//  GIFPlayer
//
//  Created by Ali on 16/8/29.
//  Copyright © 2016年 Ali. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CADisplayLineImage : UIImage

@property (nonatomic,readonly) NSTimeInterval *frameDurations;
@property (nonatomic,readonly) NSUInteger loopCount;
@property (nonatomic,readonly) NSTimeInterval totalDuratoin;

-(UIImage *)getFrameWithIndex:(NSUInteger)idx;

@end
