/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:47:13 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProVideo/ProVideo-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>

@interface PAEKeyerHistogram : NSObject <NSCoding> {

	ColorHisto* _histogram;

}
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setHistogram:(ColorHisto*)arg1 ;
-(void)dealloc;
-(ColorHisto*)getHistogram;
-(void)setHistogramArray:(id)arg1 ;
@end
