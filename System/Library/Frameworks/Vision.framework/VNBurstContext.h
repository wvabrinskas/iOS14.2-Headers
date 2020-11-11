/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:39:35 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class BurstImageSetInternal;

@interface VNBurstContext : NSObject {

	BurstImageSetInternal* _burstSet;

}

@property (nonatomic,copy) id loggingCallback; 
-(BOOL)isPortrait;
-(BOOL)isAction;
-(id)bestImageIdentifiers;
-(id)allImageIdentifiers;
-(id)coverImageIdentifier;
-(id)allClusters;
-(id)allImageStats;
-(BOOL)addBurstFrameWithIdentifier:(id)arg1 fromImageBuffer:(id)arg2 withProperties:(id)arg3 error:(id*)arg4 ;
-(id)loggingCallback;
-(void)setLoggingCallback:(id)arg1 ;
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end
