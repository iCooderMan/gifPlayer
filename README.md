#GIFPlayer

### 只需调用 以下一句话

```

/**
 *  @author Ali
 *
 *  流畅播放GIF
 *
 *  @param contentView 需要在显示的View
 *  @param frame       显示的位置
 *  @param imageName   GIF图片名称
 */

[CADisplayLineImageView disPlayGIFImageInView:self.view withFrame:CGRectMake(0, 0, self.view.bounds.size.width, self.view.bounds.size.height) andGIFImageName:@"MyGIF.gif"];
```