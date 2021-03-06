/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:15 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SpriteKit/SpriteKit-Structs.h>
#import <SpriteKit/SKAction.h>

@class SKAction, NSString;

@interface SKReferencedAction : SKAction {

	SKCReferencedAction* _mycaction;
	SKAction* _referencedAction;
	NSString* _referencedActionName;

}
+(BOOL)supportsSecureCoding;
+(id)referenceActionWithName:(id)arg1 duration:(double)arg2 ;
-(void)setDuration:(double)arg1 ;
-(id)init;
-(void)setTimingFunction:(/*^block*/id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setTimingMode:(long long)arg1 ;
-(id)reversedAction;
-(id)subactions;
-(void)_ensureReferencedAction;
@end

