/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:05 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSKeyedUnarchiver.h>

@class NSSet;

@interface PBKeyedUnarchiver : NSKeyedUnarchiver {

	NSSet* _allowedClasses;

}

@property (nonatomic,copy) NSSet * allowedClasses;              //@synthesize allowedClasses=_allowedClasses - In the implementation block
-(NSSet *)allowedClasses;
-(void)setAllowedClasses:(NSSet *)arg1 ;
@end
