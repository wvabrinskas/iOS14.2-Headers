/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:48:34 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /usr/lib/libacmobileshim.dylib
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol ACFCertificateStoragePolicy <NSObject>
@required
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2;

@end
