/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:16 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SKUniform;

@interface SKUniformInfo : NSObject {

	unsigned long long seed;
	unsigned long long textureTarget;
	SKUniform* uniform;

}

@property (assign) unsigned long long seed; 
@property (assign) unsigned long long textureTarget; 
@property (retain) SKUniform * uniform; 
-(unsigned long long)seed;
-(void)setSeed:(unsigned long long)arg1 ;
-(id)init;
-(SKUniform *)uniform;
-(unsigned long long)textureTarget;
-(void)setTextureTarget:(unsigned long long)arg1 ;
-(void)setUniform:(SKUniform *)arg1 ;
@end

