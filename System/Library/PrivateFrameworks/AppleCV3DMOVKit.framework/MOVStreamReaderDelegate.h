/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:45:36 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/AppleCV3DMOVKit.framework/AppleCV3DMOVKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MOVStreamReaderDelegate <MOVStreamReaderDelegateDeprecated,NSObject>
@optional
-(unsigned)reader:(id)arg1 pixelFormatForStream:(id)arg2 suggestedFormat:(unsigned)arg3;
-(void)reader:(id)arg1 didReceiveWarning:(id)arg2;
-(unsigned)reader:(id)arg1 bytesPerRowForStream:(id)arg2 storedValue:(unsigned)arg3;
-(unsigned)pixelFormatForUnknownTrackOfReader:(id)arg1;

@end
