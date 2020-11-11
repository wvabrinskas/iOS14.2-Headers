/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:38 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSString;

@interface MLLayerPath : NSObject <NSCopying> {

	NSArray* _scopedModelNames;
	NSString* _layerName;

}

@property (nonatomic,copy) NSString * layerName;                    //@synthesize layerName=_layerName - In the implementation block
@property (nonatomic,copy) NSArray * scopedModelNames;              //@synthesize scopedModelNames=_scopedModelNames - In the implementation block
-(id)init;
-(unsigned long long)hash;
-(BOOL)isEqualToMLLayerPath:(id)arg1 ;
-(void)setLayerName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)appendPathComponent:(id)arg1 ;
-(NSString *)layerName;
-(id)initWithScopedModelAndLayerName:(id)arg1 layerName:(id)arg2 ;
-(void)setScopedModelNames:(NSArray *)arg1 ;
-(NSArray *)scopedModelNames;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
